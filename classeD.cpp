#include "classeD.hpp"

classeD::classeD()
{
    D1 = 0;
    D2 = 0;
}

classeD::~classeD(){}

void classeD::MD1()
{
    std::cout << "Metodo MD1" << std::endl;
}

void classeD::MD2()
{
    std::cout << "Metodo MD2" << std::endl;
}

void classeD::MD3()
{
    std::cout << "Metodo MD3" << std::endl;
}

void classeD::MD4()
{
    std::cout << "Metodo MD4" << std::endl;
}

int classeD::getD1()
{
    return D1;
}

void classeD::setD1(int _d1)
{
    D1 = _d1;
}

float classeD::getD2()
{
    return D2;
}

void classeD::setD2(float _d2)
{
    D2= _d2;
}
