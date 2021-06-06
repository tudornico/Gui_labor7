#include "customer_format.h"
#include "ui_customer_format.h"
#include "reader.h"
#include "Business.h"
#include "id_reader.h"
#include "QTableWidget"
#include "carslist.h"
#include "QString"
#include "select_username.h"
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
void Customer_format::set_client(Client::Kunde current_client){
    this->current_client=current_client;
}

void Customer_format::on_Add_button_clicked()
{this->hide();
 reader new_reader;
 new_reader.setModal(true);
 new_reader.exec();
 this->show();
 Domain::Car my_car=new_reader.get_car();
 vector <Domain::Car> result=this->current_client.show_all();
 for(int i=0;i<result.size();i++)
 {
     cout<<result[i].get_Brand();
 }
 this->show();

}

void Customer_format::on_Find_button_clicked()
{

}


void Customer_format::on_Remove_button_clicked()
{   this->hide();
    id_reader id;
    id.setModal(true);
    id.exec();
    int my_id=id.get_id();
    this->current_client.delete_favourite(my_id);
    this->show();
}



void Customer_format::on_Exit_button_clicked()
{
    this->close();
}


void Customer_format::on_all_button_clicked()
{CarsList *favourite_cars=new CarsList;
QTableWidgetItem *square= new QTableWidgetItem;

}






void Customer_format::on_Back_button_clicked()
{
    this->close();
}


void Customer_format::on_switch_button_clicked()
{   this->hide();
    select_username new_username;
    new_username.setModal(true);
    new_username.exec();
    this->current_client=new_username.get_client();
    this->show();
}

