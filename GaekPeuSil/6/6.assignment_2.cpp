#include <iostream>
#include <fstream>
using namespace std;
void first(int*);
void second(float*);
int main() {
	int xx = 1234;
	int yy[5];
	float zz[3];
	ofstream aa("mybin2.dat");
	if (!aa) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	aa << xx << endl;
	first(yy);
	for (int i = 0; i < 5; i++) {aa << yy[i] << endl;}
	second(zz);
	for (int i = 0; i < 3; i++) {aa << zz[i] << endl;}
	aa.close();
}

void first(int *ii) {for (int i = 0; i < 5; i++) {  ii[i] = (i + 1) * 1000 * 5;}}
void second(float *ii) {for (int i = 0; i < 3; i++) {  ii[i] = (i - 1) * 0.5 * (i - 1) * 0.5;	}}