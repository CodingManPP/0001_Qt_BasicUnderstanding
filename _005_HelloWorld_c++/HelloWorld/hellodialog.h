#ifndef HELLODIALOG_H
#define HELLODIALOG_H

#include <QDialog>

//定义命名空间，并且做了前置声明HelloDialog；前置声明的作用：加快编译速度，避免在头文件中随意包含其他头文件而产生错误
namespace Ui {
class HelloDialog;
}

class HelloDialog : public QDialog
{
    //扩展普通C++类的功能，例如常见的信号和槽的功能必须在此类定义的最开始处定义宏,加上之后再链接时候会报错error: undefined reference to `vtable for HelloDialog'
//    Q_OBJECT
public:
    //构造函数，参数是用来指定父窗口，默认没有父窗口
    explicit HelloDialog(QWidget *parent = 0);
    ~HelloDialog();

private:
    Ui::HelloDialog *ui;
};

#endif // HELLODIALOG_H
