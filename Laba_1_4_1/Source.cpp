#include "Metod1.h"
#include "Metod2.h"
#include "Metod3.h"
#include "Metod4.h"
#include "Metod5.h"
#include "Metod6.h"
#include "Metod7.h"
#include "Metod8.h"
#include "Metod9.h"
#include "Metod10.h"
#include "Table.h"
#include <iostream>
using namespace std;

double (*pnum)() = NULL;

int main()
{
	int n, a, b, k, mm, dn;
	cout << "for gen. 1 var input 1\nfor gen. 2 var input 2\nfor gen. 3 var input 3\nfor gen. 4 var input 4\nfor gen. 5 var input 5\nfor gen. 6 var input 6\nfor gen. 7 var input 7\nfor gen. 8 var input 8\nfor gen. 9 var input 9\nfor gen. 10 var input 10\n";
	cin >> k;
	switch (k)
	{
	case 1:
	{
		cout << "input n: ";
		cin >> n;
        pnum = &num1;
        mm = 2147483647;
        a=0;
        b=1;
        dn =10;
		break;
	}
	case 2:
	{
		cout << "input n: ";
		cin >> n;
        pnum = &num2;
        mm = 2147483647;
        a=0;
        b=1;
        dn =10;
		break;
	}
	case 3:
	{
		cout << "input n: ";
		cin >> n;
        pnum = &num3;
        mm = 2147483647;
        a=0;
        b=1;
        dn =10;
		break;
	}
	case 4:
	{
		cout << "input n: ";
		cin >> n;
        pnum = &num4;
        mm = 524287;
        a=0;
        b=1;
        dn =10;
		break;
	}
	case 5:
	{
		cout << "input n: ";
		cin >> n;
        pnum = &num5;
        mm = 2147483647;
        a=0;
        b=1;
        dn =10;
		break;
    }
    case 6:
	{
		cout << "input n: ";
		cin >> n;
		pnum = &num6;
		mm = 1;
        a=-3;
        b=3;
        dn =10;
		break;
    }
    case 7:     //????
	{
		cout << "input n: ";
		cin >> n;
		pnum = &num7;
		mm = 1;
        a=-3;
        b=3;
        dn =10;
		break;
    }
    case 8:
	{
		cout << "input n: ";
		cin >> n;
		pnum = &num8;
		mm = 1;
        a=-3;
        b=3;
        dn =10;
		break;
    }
    case 9:
	{
		cout << "input n: ";
		cin >> n;
		pnum = &num9;
		mm = 1;
        a=0;
        b=100;
        dn =10;
		break;
    }
    case 10:
	{
		cout << "input n: ";
		cin >> n;
		pnum = &num10;
		mm = 1;
        a=0;
        b=100;
        dn =10;
		break;
    }
    default: break;
    }

    cout << "--------------------" << endl;
    table1 (n, pnum, mm, a, b, dn);
	system("pause");
}
