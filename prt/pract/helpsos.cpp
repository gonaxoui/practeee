#include "helpsos.h"
#include "ui_helpsos.h"

helpsos::helpsos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::helpsos)
{
    ui->setupUi(this);
}

helpsos::~helpsos()
{
    delete ui;
}


void helpsos::on_radioButton_13_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/главное окно.png);background:none;");
    }
}

void helpsos::on_radioButton_2_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/окно с таблицей.png);background:none;");
    }
}

void helpsos::on_radioButton_3_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/добавление записи.png);background:none;");
    }
}

void helpsos::on_radioButton_4_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/редактирование данных.png);background:none;");
    }
}

void helpsos::on_radioButton_5_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/ввод данных.png);background:none;");
    }
}

void helpsos::on_radioButton_6_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/добавление еще.png);background:none;");
    }
}

void helpsos::on_radioButton_7_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/поиск ввод.png);background:none;");
    }
}

void helpsos::on_radioButton_8_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/поиск очистка.png);background:none;");
    }
}

void helpsos::on_radioButton_9_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/удаление.png);background:none;");
    }
}

void helpsos::on_radioButton_10_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/удалилось.png);background:none;");
    }
}

void helpsos::on_radioButton_11_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/разрабы.png);background:none;");
    }
}

void helpsos::on_radioButton_12_clicked(bool checked)
{
    if(checked)
    {
        ui->label->setStyleSheet("image: url(:/img/img/выход.png);background:none;");
    }
}
