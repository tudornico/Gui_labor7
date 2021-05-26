#include "my_ui.h"
#include "./ui_my_ui.h"
#include <QPushButton>
#include <QMainWindow>

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

}

