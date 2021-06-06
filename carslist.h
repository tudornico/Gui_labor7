#ifndef CARSLIST_H
#define CARSLIST_H

#include <QWidget>
#include "Persistence.h"
namespace Ui {
class CarsList;
}

class CarsList : public QWidget
{
    Q_OBJECT

public:
    explicit CarsList(QWidget *parent = nullptr);
    ~CarsList();

private slots:
    void on_button_exit_clicked();

    void on_button_back_clicked();

private:
    Ui::CarsList *ui;
    Repository::CarRepo _rep;
};

#endif // CARSLIST_H
