#include "id_reader.h"
#include "ui_id_reader.h"

id_reader::id_reader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::id_reader)
{
    ui->setupUi(this);
}

id_reader::~id_reader()
{
    delete ui;
}

void id_reader::on_Submit_button_clicked()
{

}

