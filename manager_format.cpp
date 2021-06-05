#include "manager_format.h"
#include "ui_manager_format.h"
#include "reader.h"
#include "Business.h"
#include "id_reader.h"
#include "carslist.h"
manager_format::manager_format(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::manager_format)
{
    ui->setupUi(this);
}

manager_format::~manager_format()
{
    delete ui;
}
void manager_format::manager_show(){

    manager_format ui;
}

void manager_format::on_add_button_clicked()
{
 reader new_reader;
 new_reader.setModal(true);
 new_reader.exec();
 string model,brand,fuel;
 int year,kilometers,price,power;

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


void manager_format::on_add_button_2_clicked()
{

}


void manager_format::on_pushButton_clicked()
{

}


void manager_format::on_exit_button_clicked()
{
    //ui->close();
}


void manager_format::on_button_all_clicked()
{
    CarsList new_list;
    CarsList *switch_widget=new CarsList;
    switch_widget->show();

    this->hide();
}

