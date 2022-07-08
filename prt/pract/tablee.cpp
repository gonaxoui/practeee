#include "tablee.h"
#include "ui_tablee.h"

Tablee::Tablee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Tablee)
{

    ui->setupUi(this);



    db =QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./BDforme.db");
    if (db.open())
    {
        qDebug("open");
    }
    else
    {
        qDebug("no open");
    }
    query = new QSqlQuery(db);
    query ->exec("CREATE TABLE Hotels(TYTLE TEXT, TYPE TEXT, DESCRIPTION TEXT); ");

    model = new QSqlTableModel(this, db);
    model ->setTable("Hotels");
    model->select();

    //QSortFilterProxyModel* proxy = new QSortFilterProxyModel(this);
  //  proxy->setSourceModel(model);

    ui->tableView->setModel(model);

    editForm = new Form();
    editForm->setParent(this,Qt::Window);
    editForm->setModel(model);
}

Tablee::~Tablee()
{
    delete ui;
}

void Tablee::on_pushButton_2_clicked()
{
    model->insertRow(model->rowCount());
}

void Tablee::on_pushButton_clicked()
{
    model->removeRow(row);
}

void Tablee::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();


}

void Tablee::on_tableView_doubleClicked(const QModelIndex &index)
{
   editForm->mapper->setCurrentModelIndex(index);
   editForm->show();
}


void Tablee::on_exit_clicked()
{
    close();
}


void Tablee::on_abts_clicked()
{
    window = new Aboutus(this);
    window->show();
}


void Tablee::on_search_textChanged(const QString &arg1)
{
     model->setFilter(QString("TYTLE = '%1'").arg(arg1));

}

void Tablee::on_cancel_clicked()
{
    model->setFilter(QString());
}

void Tablee::on_pushButton_4_clicked()
{
    okno = new helpsos(this);
    okno->show();
}
