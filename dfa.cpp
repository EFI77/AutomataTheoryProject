#include "dfa.h"
#include <iostream>

void DfaMachine::addTransition(Transition trans)
{
    this->transitions.push_back(trans);
}

void DfaMachine::removeTransition(Transition * trans)
{
    this->transitions.erase(
        this->transitions.begin() + std::distance(this->transitions.data(), trans)
    );
}

bool DfaMachine::calc(std::string input)
{
    State * current = startState;

    for (size_t i = 0; i < input.size(); i++)
    {
        for (size_t j = 0; j < transitions.size(); j++)
        {
            if (transitions[j].getFrom() == current && transitions[j].getCond() == std::string(1, input[i]))
            {
                current = transitions[j].getTo();
                break;
            }
        }
    }
    return current->getIsFinal();
}

DfaMachine::DfaMachine()
{
}


DfaMachine::~DfaMachine()
{
}
