#ifndef MY_UI_H
#define MY_UI_H

#include <QMainWindow>
#include "Business.h"
#include "Persistence.h"
#include "Domain.h"
#include "Kunde.h"
QT_BEGIN_NAMESPACE
namespace Ui { class My_UI; }
QT_END_NAMESPACE

class My_UI : public QMainWindow
{
    Q_OBJECT

public:
    My_UI(QWidget *parent = nullptr);

    ~My_UI();

private slots:
    void on_Manager_button_clicked();

private:
    Ui::My_UI *ui;
};
#endif // MY_UI_H
