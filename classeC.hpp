#ifndef CLASSEC_HPP
#define CLASSEC_HPP

#include <iostream>

class classeC
{
private:
    std::string C1;
    int C2;
public:
    classeC();
    ~classeC();
    void MC1();
    void MC2();
    void MC3();
    std::string getC1();
    void setC1(std::string _c1);
    int getC2();
    void setC2(int _c2);

};

#endif