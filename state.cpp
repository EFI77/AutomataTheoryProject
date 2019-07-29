#include "state.h"

State::State()
{
}

State::State(std::string _name, bool _isFinal)
    :name(_name), isFinal(_isFinal)
{
}

State::~State()
{
}

void State::setName(std::string _name)
{
    this->name = _name;
}

void State::setFinal(bool _isFinal)
{
    this->isFinal = _isFinal;
}

std::string State::getName()
{
    return this->name;
}

bool State::getIsFinal()
{
    return this->isFinal;
}
