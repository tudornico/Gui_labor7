#include "my_ui.h"
#include "./ui_my_ui.h"
#include <QPushButton>
#include <QMainWindow>
#include "Kunde.h"
#include "Manager_ui.h"
#include "customer_format.h"
My_UI::My_UI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::My_UI)
{
    ui->setupUi(this);
}


My_UI::~My_UI()
{
    delete ui;
}

//right click go to slots
void My_UI::on_Manager_button_clicked()
{



    this->hide();
}


void My_UI::on_customer_button_clicked()
{
    Customer_format c_format;
    c_format.setModal(true);
    c_format.exec();

    this->hide();
}


void My_UI::on_client_button_clicked()
{
    QWidget *switch_widget=new QWidget;
    switch_widget->show();
    //ui->setupUi
    this->hide();
}


void My_UI::on_exit_button_clicked()
{
   this->close();
}

