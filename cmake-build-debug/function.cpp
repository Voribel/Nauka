#include <iostream>
#include "C:\Users\Wiktor\Desktop\Uczenie\kalkulator\function.h"

int calc(int x, int y)//Adding
{
    int result=x+y;
    return result;
};
int calc(short x, short y)//Substract
{
    int result=x-y;
    return result;
};
int calc(double x, double y)//Multiply
{
    int result =x*y;
    return result;
};
int calc(float x, float y)//Divide
{
    int result=0;
    if(y<0)
        std::cout << "Divider can't be 0 \n";
    else
        result=x=y;
    return result;
};
