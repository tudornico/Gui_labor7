#ifndef READER_H
#define READER_H
#include "Business.h"
#include "customer_format.h"
#include "manager_format.h"
#include <QDialog>
namespace Ui {
class reader;
}

class reader : public QDialog
{
    Q_OBJECT

public:
    explicit reader(QWidget *parent = nullptr);
    ~reader();
    Domain::Car get_car();

private slots:
    void on_Submit_button_clicked();

private:
    Ui::reader *ui;
    Customer_format c_format;
    manager_format m_format;

};

#endif // READER_H
