#ifndef DFA_H
#define DFA_H

#include "Machine.h"
class DfaMachine :
    public Machine
{

public:
    DfaMachine();
    ~DfaMachine();

    void addTransition(Transition) override;
    void removeTransition(Transition*) override;

    bool calc(std::string input);
};

#endif // DFA_H


