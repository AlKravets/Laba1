#include "Metod6.h"
#include "Metod1.h"
#include <cmath>

using namespace std;

unsigned int x6=2;
unsigned int y6 =1;


double num6()
{
	double s, summ=0;
	for (int j = 0; j < 12; j++)
    {
        s = num1();
        summ = summ + s / 2147483647;
    }
    s = summ - 6;
	return s;
}
