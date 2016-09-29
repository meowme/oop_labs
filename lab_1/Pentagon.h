#ifndef PENTAGON_H
#define PENTAGON_H
#include <iostream>
#include "Figure.h"
using namespace std;

class Pentagon : public Figure {
public:
    Pentagon(istream &is);
    
    double Square() override;
    void Print() override;
    
    virtual ~Pentagon();
private:
    double x[5];
    double y[5];
};

#endif
