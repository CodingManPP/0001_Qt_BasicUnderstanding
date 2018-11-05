#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc,char* argv[]){

    QApplication a(argc,argv);
    //QDialog 实现一个对话框界面
    QDialog w;
    w.resize(400,300);
    //将QDialog作为参数，表明了对话框是它的父窗口，即将这个标签放到了对话框中
    QLabel label(&w);
    label.move(120,120);
    //设置Label标签的文字内容
//    label.setText("HelloWorld!您好，我是Qt！空工程建立");
    label.setText(QObject::tr("HelloWorld!您好，我是Qt！空工程建立"));

    //显示对话框
    w.show();
    //让QApplication 对象的进入到事件循环中，当Qt应用程序运行时可以接收产生的事件，如单击和键盘按下等事件
    return a.exec();


}


