#include "id_reader.h"
#include "ui_id_reader.h"
int _id;
id_reader::id_reader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::id_reader)
{
    ui->setupUi(this);
}
int id_reader::get_id()
{
    return _id;
}
id_reader::~id_reader()
{
    delete ui;
}

void id_reader::on_Submit_button_clicked()
{
    int id=ui->ID_line->text().toInt();
    _id=id;
    this->close();
}

