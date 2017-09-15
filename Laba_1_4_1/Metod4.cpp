#include "Metod4.h"
//#include <iostream>
using namespace std;

unsigned int x4=2;
unsigned int y4 =1;

double num4()
{
	unsigned int z = 524287;
	while (x4*z % 524287 != 1)
	{
		z++;
	}
	x4 = (4 * z + 5) % 524287;
	//cout << x << " ";
	//x = (343761 * x + 3232414) % 2147483647;
	return x4;
}