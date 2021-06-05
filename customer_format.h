#ifndef CUSTOMER_FORMAT_H
#define CUSTOMER_FORMAT_H
#include "Kunde.h"
#include <QDialog>
#include "Business.h"

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

    void add_client(Client::Kunde client);
    void set_username(string username);
    vector<Client::Kunde> get_client_list();
private slots:
    void on_Add_button_clicked();

    void on_Find_button_clicked();

    void on_Remove_button_clicked();


    void on_pushButton_clicked();

    void on_Exit_button_clicked();

    void on_all_button_clicked();

private:
    Ui::Customer_format *ui;
    std::vector<Client::Kunde> client_list;
    std::string username;

};

#endif // CUSTOMER_FORMAT_H
