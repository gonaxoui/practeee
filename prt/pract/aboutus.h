#ifndef ABOUTUS_H
#define ABOUTUS_H

#include <QDialog>

namespace Ui {
class Aboutus;
}

class Aboutus : public QDialog
{
    Q_OBJECT

public:
    explicit Aboutus(QWidget *parent = nullptr);
    ~Aboutus();

private slots:
    void on_gorina_clicked(bool checked);

    void on_pisarevskaya_clicked(bool checked);

    void on_savvinova_clicked(bool checked);

private:
    Ui::Aboutus *ui;
};

#endif // ABOUTUS_H
