#ifndef STATE_H
#define STATE_H

#include <string>

class State
{
    std::string name;
    bool isFinal;

public:
    State();
    State(std::string _name, bool _isFinal);
    ~State();

    void setName(std::string _name);
    void setFinal(bool _isFinal);
    std::string getName();
    bool getIsFinal();
};

#endif // STATE_H
