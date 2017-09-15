#include "Metod2.h"
//#include <iostream>
using namespace std;

unsigned int x2=2;

double num2()
    {
        x2 = (4 * x2*x2 + 6 * x2 + 3) % 2147483647;
        return x2;
    }
