#include "labpage.h"
#include "ui_labpage.h"
#include "machine.h"
#include "dfa.h"
#include <vector>
#include <iostream>
#include <QPainter>

using namespace std;

labpage::labpage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::labpage)
{
    ui->setupUi(this);
}

void labpage::paintEvent(QPaintEvent *event)
{
    QPainter* painter=new QPainter(this);


    Machine * mymachine = new DfaMachine();

    mymachine->addState(State("A", true));
    mymachine->addState(State("B", false));
    mymachine->addState(State("c", true));

    vector<State>states = mymachine->getStates();
    mymachine->setStart(&states[0]);
    mymachine->addTransition(Transition("1" , &states[0],&states[1]));
//    mymachine->addTransition(Transition("2" , &states[1],&states[2]));
//    mymachine->addTransition(Transition("3" , &states[2],&states[0]));

    cout<<mymachine->calc("1231")<<endl;


    for(auto element : mymachine->getTransitions())
    {
        element.draw(painter);
    }


    for(auto element : states)
    {
        element.draw(painter);
    }



   // painter->fillRect(20, 20, 550, 350, Qt::black);
}


//void labpage::creatMachine(){
//    selectedObject = nullptr;
//}

/*void labpage::mousePressEvent(QMouseEvent* event){
     auto p = mapFromGlobal(QCursor::pos());
     selectedObject = Machine->getSelectedObject(PL::Vector(p.x(), p.y()));
}*/

//void labpage::mouseMoveEvent(QMouseEvent *event){
//    if(selectedObject){
//        auto p = mapFromGlobal(QCursor::pos());
//        selectedObject->setPosition(PL::Vector(p.x(), p.y()));
//        update();
//    }
//}

labpage::~labpage()
{
    delete ui;
}
