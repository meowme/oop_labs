#ifndef RHOMBUS_H
#define RHOMBUS_H
#include <iostream>
#include "Figure.h"
using namespace std;

class Rhombus : public Figure {
public:
    Rhombus(istream &is);
    
    double Square() override;
    void Print() override;
    
    virtual ~Rhombus();
private:
    double x[4];
    double y[4];
};

#endif
