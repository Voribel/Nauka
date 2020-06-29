#include <iostream>
#include "function.h"

int main() {
    int iNum;
    double iFirst,iSecond;
    std::cout << "What do you want to do? \n";
    std::cout << "1: Add \t";
    std::cout << "2: Substract \n";
    std::cout << "3: Multiply \t";
    std::cout << "4: Divide \n";
    std::cout <<"Type in your choice: ";
    std::cin >> iNum;
    std::cout << "Type in first number: \n";
    std::cin >> iFirst;
    std::cout << "Type in second number: \n";
    std::cin >> iSecond;
    switch(iNum)
    {
        case 1:
            calc(iFirst,iSecond);
            break;
        case 2:
            calc(iFirst,iSecond);
            break;
        case 3:
            calc(iFirst,iSecond);
            break;
        case 4:
            calc(iFirst,iSecond);
            break;

    };

}
