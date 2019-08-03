#ifndef STATE_H
#define STATE_H

#include <string>
#include <QPainter>

class State
{
    int x,y;
    std::string name;
    bool isFinal;

public:
    State();
    State(std::string _name, bool _isFinal);
    ~State();
    void draw(QPainter *);
    void setPosition(int , int);
    int getx();
    int gety();
    void setName(std::string _name);
    void setFinal(bool _isFinal);
    std::string getName();
    bool getIsFinal();
};

#endif // STATE_H
