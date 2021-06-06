#ifndef SELECT_USERNAME_H
#define SELECT_USERNAME_H
#include "Kunde.h"
#include <QDialog>

namespace Ui {
class select_username;
}

class select_username : public QDialog
{
    Q_OBJECT

public:
    explicit select_username(QWidget *parent = nullptr);
    ~select_username();
     Client::Kunde get_client();
private slots:
    void on_Submit_button_clicked();

private:
    Ui::select_username *ui;
    std::vector<Client::Kunde> client_list;

};

#endif // SELECT_USERNAME_H
