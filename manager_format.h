#ifndef MANAGER_FORMAT_H
#define MANAGER_FORMAT_H

#include <QDialog>
#include "Persistence.h"
namespace Ui {
class manager_format;
}

class manager_format : public QDialog
{
    Q_OBJECT

public:
    explicit manager_format(QWidget *parent = nullptr);
    ~manager_format();
    void manager_show();

private slots:

    void on_button_find_clicked();

    void on_button_remove_clicked();

    void on_button_exit_clicked();

    void on_button_all_clicked();

    void on_button_add_clicked();

private:
    Ui::manager_format *ui;
    Repository::CarRepo _rep;
};

#endif // MANAGER_FORMAT_H
