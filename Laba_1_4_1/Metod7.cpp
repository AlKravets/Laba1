#include "Metod7.h"
#include "Metod1.h"
#include "Metod2.h"
#include <cmath>

using namespace std;

double x7=2;
double y7 =1;
bool ytrue = true;

double num7()
{
    double s, v1, v2;
    s = 2;
    if (ytrue)
    {
        while (s >= 1)
        {
            s =num1();
            v1 = 2.0 * (s / 2147483647) - 1;
            s = num2();
            v2 = 2.0 * (s / 2147483647) - 1;
            s = v1*v1 + v2*v2;
        } 
		cout << s << " ";
        x7 = v1* pow((-2 * log(s) / s), 0.5);
        y7 = v2* pow((-2 * log(s) / s), 0.5);
		cout << x7 << " " << y7 << " ";
        ytrue = false;
    }
    else 
    {
        x7 = y7;
        ytrue = true;
    }
	return x7;
}
