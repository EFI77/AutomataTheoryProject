#include "mainwindow.h"
#include <QApplication>
#include "machine.h"
#include "dfa.h"
#include <iostream>
#include <vector>
#include <random>
#include <time.h>

using namespace std;

int main(int argc, char *argv[])
{
    srand((unsigned int)time(0));
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
