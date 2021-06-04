#include "reader.h"
#include "ui_reader.h"
#include <QString>
#include "Business.h"
#include <fstream>
reader::reader(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
}

reader::~reader()
{
    delete ui;
}
Domain :: Car store(string model,string brand ,string fuel,int year,int km,int price,int power){
    Domain::Car new_object(model,brand,fuel,year,km,price,power);
    return new_object;
}
void reader::on_Submit_button_clicked()
{std::ofstream my_file;
    
    my_file.open("data_base");
   const std::string model=ui->Model_line->text().toStdString();
   const std::string brand=ui->Brand_line->text().toStdString();
   const std::string fuel=ui->Fuel_line->text().toStdString();
   const int year=ui->Year_line->text().toInt();
   const int km=ui->Km_line->text().toInt();
   const int price=ui->Price_line->text().toInt();
   const int power=ui->Power_line->text().toInt();

    my_file<<model<<" "<<brand<<" "<<fuel<<" "<<year<<" "<<km<<" "<<price<<" "<<power<<"\n";
    my_file.close();
    this->close();
}

