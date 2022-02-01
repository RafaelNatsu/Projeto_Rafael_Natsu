#include "classeC.hpp"

classeC::classeC()
{
    C1 = "";
    C2 = 0;
}

classeC::~classeC(){}

void classeC::MC1()
{
    std::cout << "Metodo MC1" << std::endl;
}

void classeC::MC2()
{
    std::cout << "Metodo MC2" << std::endl;
}

string classeC::getC1()
{
    return C1;
}

void classeC::setC1(string _c1)
{
    C1 = _c1;
}

int classC::getC2()
{
    return C2;
}

void classC::setC2(int _c2)
{
    C2 = _c2;
}
