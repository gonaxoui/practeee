#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/recouress/img/Frame 1.png");



}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_Letsgo_clicked()
{
    hide();
    window = new Tablee(this);
    window->show();
}
