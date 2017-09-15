#include "Metod10.h"
#include "Metod1.h"
#include "Metod2.h"
#include <cmath>

using namespace std;

unsigned int x10=2;
unsigned int y10 =1;


double num10()
{
    double s, u, v, l=50;
    do
    {
        s = num1();
        u = tan(3.14*(s / 2147483647));
        s = num2();
        v = (s / 2147483647);
        s = pow(2 * l - 1, 1 / 2)*u + l - 1;
    } while ((s <= 0) || (v > (1 + u*u)*exp((l - 1)*log(s / (l - 1)) - pow(2 * l - 1, 1 / 2)*u)));
	return s;
}
