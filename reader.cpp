#include "reader.h"
#include "ui_reader.h"
#include <QString>
#include "Business.h"
#include <fstream>
std::string _model,_brand,_fuel;
int _year,_km,_price,_power;
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
Domain::Car reader::get_car(){
    Domain::Car new_obj(_model,_brand,_fuel,_year,_km,_price,_power);
    return new_obj;
}
void reader::on_Submit_button_clicked()
{std::ofstream my_file;


   const std::string model=ui->Model_line->text().toStdString();
   const std::string brand=ui->Brand_line->text().toStdString();
   const std::string fuel=ui->Fuel_line->text().toStdString();
   const int year=ui->Year_line->text().toInt();
   const int km=ui->Km_line->text().toInt();
   const int price=ui->Price_line->text().toInt();
   const int power=ui->Power_line->text().toInt();

   _model=model;
   _brand=brand;
   _fuel=fuel;
   _year=year;
   _km=km;
   _price=price;
   _power=power;
    this->close();
}

