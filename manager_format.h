#ifndef MANAGER_FORMAT_H
#define MANAGER_FORMAT_H

#include <QDialog>

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
    void on_add_button_clicked();

    void on_find_button_clicked();

    void on_remove_button_clicked();

    void on_add_button_2_clicked();

    void on_pushButton_clicked();

    void on_exit_button_clicked();

    void on_button_all_clicked();

private:
    Ui::manager_format *ui;
};

#endif // MANAGER_FORMAT_H
