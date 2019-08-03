#ifndef TRANSITION_H
#define TRANSITION_H

#include "state.h"
#include <string>
#include <QPainter>

class Transition
{

    std::string cond;
    State* from;
    State* to;

public:
    Transition(std::string _cond, State* _from, State* _to);
    Transition();
    ~Transition();
    void draw(QPainter *);
    State* getFrom();
    State* getTo();
    std::string getCond();
};


#endif // TRANSITION_H
