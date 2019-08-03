#include "state.h"
#include <iostream>
#include <QLabel>

State::State()
{
}

State::State(std::string _name, bool _isFinal)
    :name(_name), isFinal(_isFinal)
{
    x=rand() % 200 + 100;
    y=rand() % 100 + 100;
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

void State::draw(QPainter * painter)
{
    painter->setBrush(QBrush(Qt::white));
    if(this->isFinal)
    {
        painter->drawEllipse(QPointF(x, y), 35, 35);
    }
    painter->drawEllipse(QPointF(x, y), 30, 30);


    painter->drawText(QPointF(x - 4, y + 3), this->name.c_str());
}

void State::setPosition(int _x, int _y)
{
    x=_x;
    y=_y;
}

int State::getx()
{
    return this->x;
}

int State::gety()
{
    return this->y;
}
