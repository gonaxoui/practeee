#include "form.h"
#include "ui_form.h"

Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);

    mapper = new QDataWidgetMapper(this);
    mapper->setSubmitPolicy(QDataWidgetMapper::ManualSubmit);

}

Form::~Form()
{
    delete ui;
}

void Form::setModel(QAbstractItemModel *model)
{
    mapper->setModel(model);
    mapper->addMapping(ui->edtname,0,"plainText");
    mapper->addMapping(ui->comboBox,1);
    mapper->addMapping(ui->edtdescription,2,"plainText");
}

void Form::on_Save_clicked()
{
    mapper->submit();
}

void Form::on_Cancel_clicked()
{
   close();
}
