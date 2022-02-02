#ifndef CLASSEB_HPP

#define CLASSEB_HPP

#include <iostream>

class classeB
{
private:
    int B1;
    float B2;
public:
    classeB();
    ~classeB();
    void MB1();
    void MB2();
    void MB3();
    int getB1();
    void setB1(int _b1);
    float getB2();
    void setB2(float _b2);
};

#endif
