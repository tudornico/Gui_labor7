#include "carslist.h"
#include "ui_carslist.h"

CarsList::CarsList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CarsList)
{
    ui->setupUi(this);
}

CarsList::~CarsList()
{
    delete ui;
}

void CarsList::on_button_exit_clicked()
{
    this->close();
}


void CarsList::on_button_back_clicked()
{

}

