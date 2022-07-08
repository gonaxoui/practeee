#ifndef HELPSOS_H
#define HELPSOS_H

#include <QDialog>

namespace Ui {
class helpsos;
}

class helpsos : public QDialog
{
    Q_OBJECT

public:
    explicit helpsos(QWidget *parent = nullptr);
    ~helpsos();

private slots:


    void on_radioButton_13_clicked(bool checked);

    void on_radioButton_2_clicked(bool checked);

    void on_radioButton_3_clicked(bool checked);

    void on_radioButton_4_clicked(bool checked);

    void on_radioButton_5_clicked(bool checked);

    void on_radioButton_6_clicked(bool checked);

    void on_radioButton_7_clicked(bool checked);

    void on_radioButton_8_clicked(bool checked);

    void on_radioButton_9_clicked(bool checked);

    void on_radioButton_10_clicked(bool checked);

    void on_radioButton_11_clicked(bool checked);

    void on_radioButton_12_clicked(bool checked);

private:
    Ui::helpsos *ui;
};

#endif // HELPSOS_H
