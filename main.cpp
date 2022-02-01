#include <iostream>
#include "classeA.hpp"
#include "classeB.hpp"
int main(int argc, char const *argv[])
{
    classeA clA;
    classeB clB;
    clA.setA1(1);
    std::cout << clA.getA1() << std::endl;

    clA.setA2(1.1);
    std::cout << clA.getA2() << std::endl;

    clA.MA1();
    clA.MA2();

    clB.setB1(2);
    std::cout << clB.getB1() << std::endl;

    clB.setB2(2.2);
    std::cout << clB.getB2() << std::endl;

    clB.MB1();
    clB.MB2();
    std::cout << "eof" << std::endl;
    return 0;
}
