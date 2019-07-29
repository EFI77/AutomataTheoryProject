#ifndef MACHINE_H
#define MACHINE_H
#include <vector>
#include "State.h"
#include "Transition.h"


class Machine
{
protected:
    std::vector<State> states;
    std::vector<Transition> transitions;

    State * startState;

public:
    Machine();
    ~Machine();

    std::vector<State> getStates();
    std::vector<Transition> getTransitions();

    void addState(State);
    void removeState(State*);
    void setStart(State*);
    virtual void addTransition(Transition) = 0;
    virtual void removeTransition(Transition*) = 0;

};

#endif // MACHINE_H




