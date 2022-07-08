#include "aboutus.h"
#include "ui_aboutus.h"

Aboutus::Aboutus(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Aboutus)
{
    ui->setupUi(this);
}

Aboutus::~Aboutus()
{
    delete ui;
}

void Aboutus::on_gorina_clicked(bool checked)
{
    if(checked)
    {
        ui->imagine->setStyleSheet("image: url(:/img/img/горина.png);background:none;");
    }
}

void Aboutus::on_pisarevskaya_clicked(bool checked)
{
    if(checked)
    {
        ui->imagine->setStyleSheet("image: url(:/img/img/писаревск.png);background:none;");
    }
}

void Aboutus::on_savvinova_clicked(bool checked)
{
    if(checked)
    {
        ui->imagine->setStyleSheet("image: url(:/img/img/савв.png);background:none;");
    }
}
