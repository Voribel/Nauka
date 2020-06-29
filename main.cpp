#include <iostream>
#include "function.h"

int main() {
    int iNum,iFirst,iSecond;
    std::cout << "What do you want to do? \n";
    std::cout << "1: Add \t";
    std::cout << "2: Substract \n";
    std::cout << "3: Multiply \t";
    std::cout << "4: Divide \n";
    std::cout >> iNum;
    std::cout << "Type in first number: \n";
    std::cin >> iFirst;
    std::cout << "Type in second number: \n";
    std::cin >> iSecond;
    switch(iNum)
    {
        case 1:
            calc(int iFirst,int iSecond)
        case 2:
            calc(short iFirst,short iSecond)
        case 3:
            calc(double iFirst,double iSecond)
        case 4:
            calc(float iFirst,float iSecond)
    };
    return 0;
}
