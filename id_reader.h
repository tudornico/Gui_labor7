#ifndef ID_READER_H
#define ID_READER_H

#include <QDialog>

namespace Ui {
class id_reader;
}

class id_reader : public QDialog
{
    Q_OBJECT

public:
    explicit id_reader(QWidget *parent = nullptr);
    ~id_reader();

private slots:
    void on_Submit_button_clicked();

private:
    Ui::id_reader *ui;
};

#endif // ID_READER_H
