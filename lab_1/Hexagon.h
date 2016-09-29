#ifndef HEXAGON_H
#define HEXAGON_H
#include <iostream>
#include "Figure.h"
using namespace std;

class Hexagon : public Figure {
public:
    Hexagon(istream &is);
    
    double Square() override;
    void Print() override;
    
    virtual ~Hexagon();
private:
    double x[6];
    double y[6];
};

#endif
