#include "Metod3.h"
//#include <iostream>
using namespace std;

unsigned int x3=2;
unsigned int y3 =1;

double num3()
{
	unsigned int z;
	z = x3;
	x3 = (x3 + y3) % 2147483647;
	y3 = z;
	return x3;
}