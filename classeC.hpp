#ifndef CLASSEC_HPP
#define CLASSEC_HPP

#include <iosteam>

class classeC
{
private:
    string C1;
    int C2;
public:
    classeC();
    ~classeC();
    void MC1();
    void MC2();
    string getC1();
    void setC1(string _c1);
    int getC2();
    void setC2(int _c2);

};

#endif