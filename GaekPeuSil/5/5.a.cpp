#include <iostream>
using namespace std;

void main()
{
	int b[5] = { 1,2,3,4,5 };
	short *a;
	a = (short*)( b + 2) ;
	cout << a[0] << "  " << b << endl;

}