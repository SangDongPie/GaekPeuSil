#include <iostream>
using namespace std;
int fn(int *ii) {
	cout << " ii = " << *ii << endl;
	cout << " &ii = " << ii << endl;
	*ii = 10 * *ii;
	return *ii;
}
int fn2(int& ii) {
	cout << " ii = " << ii << endl;
	cout << " &ii = " << &ii << endl;
	ii = 10 * ii;
	return ii;
}
void main() {
	int i = 5, a;
	a = fn(&i);
	cout << " i = " << i << endl;
	cout << " &i = " << &i << endl;
	cout << " a = " << a << endl;

	int j = 5, b;
	b = fn2(j);
	cout << " j = " << j << endl;
	cout << " &j = " << &j << endl;
	cout << " b = " << b << endl;
}