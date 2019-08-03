#include "turing.h"
#include <iostream>

void TuringMachine::addTransition(Transition trans)
{
    this->transitions.push_back(trans);
}


void TuringMachine::removeTransition(Transition * trans)
{
    this->transitions.erase(
        this->transitions.begin() + std::distance(this->transitions.data(), trans)
    );
}


bool TuringMachine::calc(std::string input)
{

    State * current = startState;

    for (size_t i = 0; i < input.size();)
    {
        for (size_t j = 0; j < transitions.size(); j++)
        {
            if (transitions[j].getFrom() == current && transitions[j].getCond() == std::string(1, input[i]))
            {
                input[i]=input[i+1];

                current = transitions[j].getTo();
                break;
            }
        }
    }
    return current->getIsFinal();
}
