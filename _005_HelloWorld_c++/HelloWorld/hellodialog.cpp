#include "hellodialog.h"
#include "ui_hellodialog.h"


#if 1
HelloDialog::HelloDialog(QWidget * parent):
    QDialog(parent),
     ui(new Ui::HelloDialog) //创建对象的第一种方法，建议使用此方法
{
    ui->setupUi(this);
}

HelloDialog::~HelloDialog()
{
    delete ui;
}

#endif

#if 0
HelloDialog::HelloDialog(QWidget * parent):
    QDialog(parent)
{
    ui = new Ui::HelloDialog; //创建对象的第二种方法，记得去掉默认方法前的“,”号
    ui->setupUi(this);
}

HelloDialog::~HelloDialog(){
    delete ui;
}
#endif


