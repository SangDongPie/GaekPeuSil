#include <iostream>
using namespace std;
float cel2faren(float cc) { return cc * 9.0 / 5.0 + 32; }
float faren2cel(float ff) { return ff - 32 / 1.8; }
void main() {
	float cel1, cel2, celx, faren1, faren2, farenx;
	cel1 = 30.0;
	cel2 = 100.0;
	farenx = 100;
	celx = faren2cel(farenx);
	faren1 = cel2faren(cel1);
	faren2 = cel2faren(cel2);
	cout << " faren1 = " << faren1 << " faren2 = " << faren2 << " celx = " << celx <<  endl;
}