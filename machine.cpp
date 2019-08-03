#include "machine.h"

void Machine::addState(State newState)
{
    this->states.push_back(newState);
}

void Machine::removeState(State * state)
{
    this->states.erase(this->states.begin() + std::distance(this->states.data(), state));

    for (int i = 0; i < transitions.size(); i++) {
        if ((transitions[i].getFrom() == state) || (transitions[i].getTo() == state)) {
            transitions.erase(transitions.begin() + i);
        }
    }
}


void Machine::setStart(State * state)
{
    startState = state;
}

void Machine::setFinal(State * state)
{
    finalState=state;
    finalState->setFinal(true);
}

Machine::Machine()
{
}


Machine::~Machine()
{
}

std::vector<State> Machine::getStates()
{
    return states;
}

std::vector<Transition> Machine::getTransitions()
{
    return transitions;
}
