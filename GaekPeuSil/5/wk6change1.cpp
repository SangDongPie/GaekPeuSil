#include<iostream>
#include<fstream>
using namespace std;
void c2ff(float *cc, float* ff, int n) {
	for (int i = 0; i < n; i++) {
		ff[i] = cc[i] * 9 / 5 + 32;
	}
}
int main() {
	float c[] = { -40,0,15,36.5,100 }, c2f[5];
	c2ff(c, c2f, 5);
	for (int i = 0; i < 5; i++) {
		cout << c[i] << "c = " << c2f[i] << "f" << endl;
	}
	return 123;		
}