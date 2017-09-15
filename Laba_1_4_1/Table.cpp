#include "Table.h"
//#include <iostream>
#include <iomanip>
using namespace std;

void table(int n, double(*pnum)(),int mm, int a, int b, int dn)
{
	double delta = double(b - a) / dn, s = 0;
	int * arr;
	arr = new int[dn];
	for (int i = 0; i < dn; i++)
		arr[i] = 0;
	for (int i = 0; i < n; i++)
	{
		s = (*pnum)()/ mm;
		for (int j = 0; j < dn; j++)
		{
			if ((s > a + j*delta) && (s < a + (j + 1)*delta))
				arr[j]++;
		}

	}
	s = a;
	for (int i = 0; i < dn; i++)
	{
		cout.precision(3);
		cout << setw(4) << s + i*delta << " , " << setw(4) << s + (i + 1)*delta << setw(10) << arr[i] << endl;
	}
//	system("pause");
	delete []arr;
}


void table1(int n, double(*pnum)(),int mm, int a, int b, int dn)
{
	double delta = double(b - a) / dn, s = 0;
	int * arr, iarr;
	arr = new int[dn];
	for (int i = 0; i < dn; i++)
        arr[i] = 0;
	for (int i = 0; i < n; i++)
	{
		s = (*pnum)()/ mm;
        iarr = (int) ((s-a) / delta);
        if ((iarr >= 0) && (iarr < dn))
            arr[iarr]++;

	}
	s = a;
	for (int i = 0; i < dn; i++)
	{
		cout.precision(3);
		cout << setw(4) << s + i*delta << " , " << setw(4) << s + (i + 1)*delta << setw(10) << arr[i] << endl;
	}
//	system("pause");
	delete []arr;
}