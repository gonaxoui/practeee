#ifndef TABLEE_H
#define TABLEE_H

#include <QDialog>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include "form.h"
#include "aboutus.h"
#include "helpsos.h"

namespace Ui {
class Tablee;
}

class Tablee : public QDialog
{
    Q_OBJECT

public:
    explicit Tablee(QWidget *parent = nullptr);
    ~Tablee();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_tableView_doubleClicked(const QModelIndex &index);

    void on_exit_clicked();

    void on_abts_clicked();

    void on_search_textChanged(const QString &arg1);


    void on_cancel_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Tablee *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;
    Form* editForm;
    Aboutus *window;
    helpsos *okno;


    int row; //это короче для того чтобы удалить, выбирается строка сначала
};

#endif // TABLEE_H
