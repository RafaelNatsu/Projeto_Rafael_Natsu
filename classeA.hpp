#ifndef CLASSEA_HPP

#define CLASSEA_HPP

#include <iostream>

class classeA
{
private:
    int A1;
    float A2;
public:
    classeA();
    ~classeA();
    void MA1();
    void MA2();
    int getA1();
    void setA1(int _a1);
    float getA2();
    void setA2(float _a2);
};

#endif
