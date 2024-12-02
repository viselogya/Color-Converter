#include "mainwindow.h"
#include <QApplication>
#include <QTest>
#include <cstdio>
#include <QLoggingCategory>
#include <testmainwindow.h>

int main(int argc, char *argv[])
{
    freopen("testing.log", "w", stdout);
    QApplication a(argc, argv);
    QLoggingCategory::setFilterRules("qt.qpa.*=false\n"
                                     "qt.core.qmetaobject.connectslotsbyname=false");
    QTest::qExec(new TestMainWindow, argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
