#include <iostream>
using namespace std;
void main() {
	int a = 4, b = 3, c;
	bool aa;

	aa = a < b;  	cout << "   " << aa << endl;
	aa = a > b;  	cout << "   " << aa << endl;

	// conditional operator
	c = a > b ? a : b;  // c=a if a>b, else c=b.
	cout << c << endl;
}
