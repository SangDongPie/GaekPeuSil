#include <iostream>
#include <fstream>
using namespace std;
int main(){
	char header[12];
	int* n;   n = (int*)header;  *n = 500;	
	float* f;   f = (float*)(header + 4);  *f = 1000;
	short* p;   p = (short*)(header + 10);  *p = 12; //12도를 뜻함.

	ofstream xx("a.dat", ios::binary | ios::out);
	if (!xx) return 666;
	xx.write(header, 12 * sizeof(char));
	xx.close();

}