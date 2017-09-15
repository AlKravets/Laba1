
#include "Metod1.h"
//#include <iostream>
using namespace std;

unsigned int x1=2;

double num1(void)
{
    x1 = (343761 * x1 + 3232414) % 2147483647;
	return x1;
}