#include "Transition.h"


Transition::Transition()
{
}

Transition::Transition(std::string _cond, State * _from, State * _to)
    :cond(_cond), from(_from), to(_to)
{
}

Transition::~Transition()
{
}

State * Transition::getFrom()
{
    return this->from;
}

State * Transition::getTo()
{
    return this->to;
}

std::string Transition::getCond()
{
    return this->cond;
}

