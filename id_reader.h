#ifndef ID_READER_H
#define ID_READER_H

#include <QDialog>
#include "customer_format.h"
#include "manager_format.h"
namespace Ui {
class id_reader;
}

class id_reader : public QDialog
{
    Q_OBJECT

public:
    explicit id_reader(QWidget *parent = nullptr);
    ~id_reader();
    int get_id();
private slots:
    void on_Submit_button_clicked();

private:
    Ui::id_reader *ui;
    Customer_format c_format;
    Manager_format m_format;
};

#endif // ID_READER_H
