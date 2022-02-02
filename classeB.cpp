#include "classeB.hpp"

classeB::classeB()
{
    B1 = 0;
    B2 = 0;
}

classeB::~classeB(){}

void classeB::MB1()
{
    std::cout << "Metodo MB1" << std::endl;
}

void classeB::MB2()
{
    std::cout << "Metodo MB2" << std::endl;
}

void classeB::MB3()
{
    std::cout << "Metodo MB3" << std::endl;
}

int classeB::getB1()
{
    return B1;
}

void classeB::setB1(int _b1)
{
    B1 = _b1;
}

float classeB::getB2()
{
    return B2;
}

void classeB::setB2(float _b2)
{
    B2= _b2;
}
