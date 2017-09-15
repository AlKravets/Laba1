#include "Metod5.h"
#include "Metod2.h"
#include "Metod1.h"
#include <cmath>

using namespace std;

unsigned int x5=2;
unsigned int y5 =1;


double num5()
{
	unsigned int z;
	x5 = (unsigned int)num1();
	y5 = (unsigned int)num2();
	z = (int)((y5+ 2147483647 - x5)% 2147483647);
	return z;
}
