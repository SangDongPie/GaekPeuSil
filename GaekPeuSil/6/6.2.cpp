#include <iostream>
using namespace std;
int fn(int);

void main() {
	int i = 5, a;
	a = fn(i);
	cout << " i = " << i << endl;
	cout << " &i = " << &i << endl;
	cout << " a = " << a << endl;
	cout << " &a = " << &a << endl;
}

int fn(int ii) {
	cout << " ii = " << ii << endl;
	cout << " &ii = " << &ii << endl;
	ii = 100 * ii;
	return ii;
}