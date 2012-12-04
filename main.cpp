#include <QApplication>
#include <QTextCodec>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
  //本地化，使用系统编码，尽可能解决编码乱码问题;
  QTextCodec *codec = QTextCodec::codecForName("System");
  QTextCodec::setCodecForCStrings(codec);
  QTextCodec::setCodecForTr(codec);
  QTextCodec::setCodecForLocale(codec);

  QApplication a(argc, argv);
  MainWindow w;
  w.show();
  
  return a.exec();
}
