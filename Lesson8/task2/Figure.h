#pragma once
#include <iostream>
class Figure {
protected:
    int sides_count;
    std::string name;
public:
    Figure();
    int get_sides_count();
    std::string get_name();
    virtual void info();
};
