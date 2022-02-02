#include <iostream>
#include "classeA.hpp"
#include "classeB.hpp"
#include "classeC.hpp"
#include "classeD.hpp"

int main(int argc, char const *argv[])
{
    classeA clA;
    classeB clB;
    classeC clC;
    classeD clD;
<<<<<<< HEAD
=======

>>>>>>> parent of 081c3b4 (Revert "Adição da classe D")
    clA.setA1(1);
    std::cout << clA.getA1() << std::endl;

    clA.setA2(1.1);
    std::cout << clA.getA2() << std::endl;

    clA.MA1();
    clA.MA2();
    clA.MA3();

    clB.setB1(2);
    std::cout << clB.getB1() << std::endl;

    clB.setB2(2.2);
    std::cout << clB.getB2() << std::endl;

    clB.MB1();
    clB.MB2();
    clB.MB3();

    clC.setC1("teste B1");
    std::cout << clC.getC1() << std::endl;

    clC.setC2(3);
    std::cout << clC.getC2() << std::endl;

    clC.MC1();
    clC.MC2();
    clC.MC3();

    clD.setD1(4);
    std::cout << clD.getD1() << std::endl;

    clD.setD2(4.4);
    std::cout << clD.getD2() << std::endl;

    clD.MD1();
    clD.MD2();

    std::cout << "eof" << std::endl;
    return 0;
}
