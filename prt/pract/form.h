#ifndef FORM_H
#define FORM_H

#include <QWidget>
#include <QDataWidgetMapper>

namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = nullptr);
    ~Form();
    void setModel (QAbstractItemModel* model);
    QDataWidgetMapper* mapper;

private slots:

    void on_Save_clicked();

    void on_Cancel_clicked();

private:
    Ui::Form *ui;

};

#endif // FORM_H
