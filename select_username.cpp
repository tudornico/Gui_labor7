#include "select_username.h"
#include "ui_select_username.h"
#include"Kunde.h"
#include <fstream>
#include "customer_format.h"
Client::Kunde my_client;
select_username::select_username(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::select_username)
{
    ui->setupUi(this);
}

select_username::~select_username()
{
    delete ui;
}

Client::Kunde select_username::get_client(){
   return my_client;
}

void select_username::on_Submit_button_clicked()
{   int checker=0;
    string username;
    username=ui->user_line->text().toStdString();
    for(int i=0;i<this->client_list.size();i++)
    {
        if(username == this->client_list[i].get_name())
        {
            my_client=client_list[i];
            checker++;
        }
    }
    if(checker == 0){
        Client::Kunde new_client(username);
        my_client=new_client;
    }

    this->close();
}

