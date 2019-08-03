#ifndef TURING_H
#define TURING_H
#include "machine.h"


class TuringMachine :
    public Machine
{
public:
    TuringMachine();
    virtual ~TuringMachine();


    void addTransition(Transition) override;
    void removeTransition(Transition*) override;

    virtual bool calc(std::string input)override;

};

#endif // TURING_H
