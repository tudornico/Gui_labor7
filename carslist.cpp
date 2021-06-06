#include "carslist.h"
#include "ui_carslist.h"
#include <fstream>
CarsList::CarsList(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CarsList)
{
    ui->setupUi(this);
    this->_rep.saveFromFile();
    for(int i=0;i<this->_rep.size();i++){

    }

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

