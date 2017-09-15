#include "Metod9.h"
#include "Metod1.h"
#include <cmath>

using namespace std;

unsigned int x9=2;
unsigned int y9 =1;


double num9()
{
    double s, u, v=54.5;
    s = num1();
    u = (s / 2147483647);
    s = -v * log(u);
	return s;
}
