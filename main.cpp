#include <iostream>
#include "Cfaction.h"

// сделать деструктор, operator double()

int main(){
    std::cout << "Start" << std::endl;
    Cfaction a(2,4);
    Cfaction b(1,2);
    Cfaction c(56,5);
    a++(b);
    a.printNumeratorDenominator();
    return 0;
}