#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
void main() {
	float f1, f2;
	ofstream aa("6_3.txt");
	for (float x = 0.0; x < 10.0; x += 0.1){
		f1 = cos(x);
		f2 = sin(x);
		
		cout << x << "  " << f1 << "  " << f2 << endl;
		aa << x << " " << f1 << " " << f2 << endl;
		if (f1 < f2) break;
	}
	aa.close();
}
