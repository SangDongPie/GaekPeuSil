#include <iostream>
#include <fstream>
using namespace std;

void c2ff(float* cc, float* ff) {
	ofstream xx("aak.bin", ios::binary | ios::out);
	for (int i = 0; i < 10; i = i+2) {
		ff[i] = cc[i/2];
		ff[i+1] = cc[i/2] * 9 / 5 + 32;
		cout << ff[i] << " " << ff[i+1]<< endl;
	}
	xx.write((char*)ff, 10*sizeof(float));
	xx.close();
}
int main() {
	float c[] = {-40,0,15,36.5,100}, c2f[10];
	c2ff(c, c2f);
	return 1;
}