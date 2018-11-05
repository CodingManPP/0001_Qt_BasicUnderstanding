#include <QApplication>
#include <QDialog>
#include <QLabel>

int main(int argc, char *argv[])
{
	
	QApplication a(argc,argv);
	QDialog w;
	w.resize(400,300);
	QLabel label;
	label.move(120,200);
	label.setText(QObject::tr("HelloWorld！ 你好Qt 手动编译"));
	w.show();
	return a.exec();
}


