#include "manager_format.h"
#include "ui_manager_format.h"
#include "reader.h"
#include "Business.h"
#include "id_reader.h"
#include "carslist.h"
#include <fstream>
#include "Domain.h"
#include <QTableWidgetItem>
#include <QString>
manager_format::manager_format(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manager_format)
{
    ui->setupUi(this);
    this->_rep.saveFromFile();
}

manager_format::~manager_format()
{
    delete ui;

}
void manager_format::manager_show(){

    manager_format ui;
}



void manager_format::on_button_find_clicked()
{
   id_reader new_id_reader;
   new_id_reader.setModal(true);
   new_id_reader.exec();
   int id;

}


void manager_format::on_button_remove_clicked()
{
    id_reader new_id_reader;
    new_id_reader.setModal(true);
    new_id_reader.exec();
    int id=new_id_reader.get_id();

    this->_rep.del(id);
    std::ofstream my_file("C:/Qt/labor6oop/data_base.txt");
    if(my_file.is_open() == false)
    {
        this->destroy();
    }
       my_file.clear();
       std::vector<Domain::Car> car_list=this->_rep.findAll();
       std::cout<<car_list[0].get_Id();
    for(int i=0;i<car_list.size();i++){
    my_file<<car_list[i].get_Model()<<","<<car_list[i].get_Brand()<<","<<car_list[i].get_Year()<<","
   <<car_list[i].get_Kilometers()<<","<<car_list[i].get_Price()<<","<<car_list[i].get_Power()<<","<<car_list[i].get_Fuel();
     my_file<<endl;
   }
   my_file.close();

}



void manager_format::on_button_exit_clicked()
{
    this->close();
}


void manager_format::on_button_all_clicked()
{
    CarsList new_list;
    CarsList *switch_widget=new CarsList;
    vector<Domain::Car> car_list=this->_rep.findAll();
    for(int i=0;i<this->_rep.size();i++){

    }
    switch_widget->show();

    this->hide();
}


void manager_format::on_button_add_clicked()
{   this->hide();
     reader new_reader;
     new_reader.setModal(true);
     new_reader.exec();
     Domain::Car new_car=new_reader.get_car();
     this->_rep.save(new_car);
     std::ofstream my_file("C:/Qt/labor6oop/data_base.txt");
     if(my_file.is_open() == false)
     {
         this->destroy();
     }
        my_file.clear();
        std::vector<Domain::Car> car_list=this->_rep.findAll();
     for(int i=0;i<car_list.size();i++){
     my_file<<car_list[i].get_Model()<<","<<car_list[i].get_Brand()<<","<<car_list[i].get_Year()<<","
    <<car_list[i].get_Kilometers()<<","<<car_list[i].get_Price()<<","<<car_list[i].get_Power()<<","<<car_list[i].get_Fuel();
      my_file<<endl;
    }
    my_file.close();
    this->show();
}

