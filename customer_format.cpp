#include "customer_format.h"
#include "ui_customer_format.h"
#include "reader.h"
#include "Business.h"
#include "id_reader.h"
Customer_format::Customer_format(QWidget *parent) :

    QDialog(parent),
    ui(new Ui::Customer_format)

{
    ui->setupUi(this);


}
void Customer_format::set_username(string username)
{
    this->username=username;
}
Customer_format::~Customer_format()
{
    delete ui;
}
std::vector<Client::Kunde> Customer_format::get_client_list(){
    return this->client_list;
}
void Customer_format::on_Add_button_clicked()
{
 reader new_reader;
 new_reader.setModal(true);
 new_reader.exec();
 Domain::Car my_car=new_reader.get_car();
 for(int i=0;i<this->client_list.size();i++)
 {
     if(this->client_list[i].get_name() == this->username){
         this->client_list[i].add_favourite(my_car);
     }
 }

}

void Customer_format::add_client(Client::Kunde client){
    this->client_list.push_back(client);
}

void Customer_format::on_Find_button_clicked()
{

}


void Customer_format::on_Remove_button_clicked()
{
    id_reader id;
    id.setModal(true);
    id.exec();
    int my_id=id.get_id();
    for(int i=0;i<this->client_list.size();i++)
    {
        if(this->client_list[i].get_name() == this->username){
            this->client_list[i].delete_favourite(my_id);
        }
    }
}



void Customer_format::on_Exit_button_clicked()
{
    this->destroy();
}


void Customer_format::on_all_button_clicked()
{

}

