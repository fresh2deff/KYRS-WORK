//Площадь треугольника
#include <iostream>
#include <math.h>
 
int main()//=========================================================
{
    int a = 20;
    int b = 8;
    double Y = 45;// ???????
    double S = a*b*sin(Y*M_PI/180)/2;
    std::cout << S << std::endl;    
 
    return 0;
}
