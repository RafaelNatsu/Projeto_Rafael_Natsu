#ifndef CLASSED_HPP

#define CLASSED_HPP

#include <iostream>

class classeD
{
private:
    int D1;
    float D2;
public:
    classeD();
    ~classeD();
    void MD1();
    void MD2();
    void MD3();
    void MD4();
    int getD1();
    void setD1(int _d1);
    float getD2();
    void setD2(float _d2);
};

#endif
