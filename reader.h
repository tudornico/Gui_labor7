#ifndef READER_H
#define READER_H
#include "Business.h"
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


private slots:
    void on_Submit_button_clicked();

private:
    Ui::reader *ui;


};

#endif // READER_H
