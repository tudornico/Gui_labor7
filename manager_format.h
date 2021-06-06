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
    ifstream my_file("data_base.txt");
    if(my_file.is_open())
    {
        string line;
        while(getline(my_file,line))
        {
            stringstream ss(line);
            const string model;
            const string brand;
            const string fuel;
            const string year;
            const string km;
            const string price;
            const string power;
            getline(ss,model,',');
            getline(ss,brand,',');
            getline(ss,year,',');
            getline(ss,km,',');
            getline(ss,price,',');
            getline(ss,power,',');
            getline(ss,fuel,',');
            Domain :: Car new_obj(model,brand,fuel,year,km,price,power);
            
        }
    }
}

manager_format::~manager_format()
{
    delete ui;
   
}
void manager_format::manager_show(){

    manager_format ui;
}



void manager_format::on_find_button_clicked()
{
   id_reader new_id_reader;
   new_id_reader.setModal(true);
   new_id_reader.exec();
   int id;

}


void manager_format::on_remove_button_clicked()
{
    id_reader new_id_reader;
    new_id_reader.setModal(true);
    new_id_reader.exec();
    int id;
}



void manager_format::on_exit_button_clicked()
{
    this->close();
}


void manager_format::on_button_all_clicked()
{
    CarsList new_list;
    CarsList *switch_widget=new CarsList;
    switch_widget->show();

    this->hide();
}


void manager_format::on_button_add_clicked()
{
     reader new_reader;
     new_reader.setModal(true);
     new_reader.exec();
     Domain::Car new_car=new_reader.get_car();
     this->_rep.save(new_car);
     std::ofstream my_file("data_base.txt");
     if(my_file.is_open() == false)
     {
         this->destroy();
     }

     my_file<<endl;
     my_file<<new_car.get_Model()<<","<<new_car.get_Brand()<<","<<new_car.get_Year()<<","
    <<new_car.get_Kilometers()<<","<<new_car.get_Price()<<","<<new_car.get_Power()<<","<<new_car.get_Fuel();

    my_file.close();
}

