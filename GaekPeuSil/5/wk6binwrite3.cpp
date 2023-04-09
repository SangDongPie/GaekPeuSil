#include <iostream>
#include <fstream>
using namespace std;
void c2ff(float* cc, float* ff) {
	*ff = *cc;
	*(ff+1) = *cc * 9 / 5 + 32;
}
int main() {
	float c[] = {-40,0,15,36.5,100}, c2f[10];
	ofstream xx("aac.bin", ios::binary | ios::out);
	for (int i = 0; i < 5; i++) {
		c2ff(&c[i], c2f + i*2);
	}
	xx.write((char*)c2f, sizeof(c2f));
	xx.close();
	return 1;
}