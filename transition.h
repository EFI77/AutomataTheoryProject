#ifndef TRANSITION_H
#define TRANSITION_H


#include "State.h"
#include <string>


class Transition
{
    State* from;
    State* to;
    std::string cond;

public:
    Transition(std::string _cond, State* _from, State* _to);
    Transition();
    ~Transition();

    State* getFrom();
    State* getTo();
    std::string getCond();
};



#endif // TRANSITION_H
