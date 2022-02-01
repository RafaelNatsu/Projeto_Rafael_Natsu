#include "classeA.hpp"

classeA::classeA()
{
    A1 = 0;
    A2 = 0;
}

classeA::~classeA(){}

void classeA::MA1()
{
    std::cout << "Metodo MA1" << std::endl;
}

void classeA::MA2()
{
    std::cout << "Metodo MA2" << std::endl;
}

int classeA::getA1()
{
    return A1;
}

void classeA::setA1(int _a1)
{
    A1 = _a1;
}

float classeA::getA2()
{
    return A2;
}

void classeA::setA2(float _a2)
{
    A2= _a2;
}
