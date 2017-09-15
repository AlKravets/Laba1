#include "Metod8.h"
#include "Metod1.h"
#include "Metod2.h"
#include <cmath>

using namespace std;

unsigned int x8=2;
unsigned int y8 =1;


double num8()
{
    double s, v, u;
	do
    {
        s = num1();
        v = (s / 2147483647);
        s = num2();
        u = (s / 2147483647);
        s = pow(8 / exp(1), 1 / 2) * (v - 0.5) / u;
    } while (s*s > (-4 * log(u)));    
	return s;
}
