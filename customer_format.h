#ifndef CUSTOMER_FORMAT_H
#define CUSTOMER_FORMAT_H

#include <QDialog>

namespace Ui {
class Customer_format;
}

class Customer_format : public QDialog
{
    Q_OBJECT

public:
    explicit Customer_format(QWidget *parent = nullptr);
    ~Customer_format();
    void Customer_show();

private slots:
    void on_Add_button_clicked();

    void on_Find_button_clicked();

    void on_Remove_button_clicked();

    void on_Add_button_2_clicked();

    void on_pushButton_clicked();

    void on_Exit_button_clicked();

private:
    Ui::Customer_format *ui;
};

#endif // CUSTOMER_FORMAT_H
