#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include "Dfa.h"

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();


    DfaMachine mymachine;

    mymachine.addState(State("A", false));
    mymachine.addState(State("B", false));
    mymachine.addState(State("C", true));

    vector<State> states = mymachine.getStates();

    mymachine.setStart(&states[0]);

    mymachine.addTransition(Transition("1", &states[0], &states[1]));
    mymachine.addTransition(Transition("1", &states[1], &states[2]));
    mymachine.addTransition(Transition("1", &states[2], &states[0]));
    mymachine.addTransition(Transition("0", &states[0], &states[2]));
    cout << mymachine.calc("1111110") << endl;


    return a.exec();
}
