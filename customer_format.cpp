#include "customer_format.h"
#include "ui_customer_format.h"
#include "reader.h"
#include "Business.h"
Customer_format::Customer_format(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Customer_format)
{
    ui->setupUi(this);
}

Customer_format::~Customer_format()
{
    delete ui;
}
void Customer_format::Customer_show(){

    Customer_format ui;
}

void Customer_format::on_Add_button_clicked()
{
 reader new_reader;
 new_reader.setModal(true);
 new_reader.exec();
 string model,brand,fuel;
 int year,kilometers,price,power;

}


void Customer_format::on_Find_button_clicked()
{

}


void Customer_format::on_Remove_button_clicked()
{

}


void Customer_format::on_Add_button_2_clicked()
{

}


void Customer_format::on_pushButton_clicked()
{

}


void Customer_format::on_Exit_button_clicked()
{
    ui->close();
}

