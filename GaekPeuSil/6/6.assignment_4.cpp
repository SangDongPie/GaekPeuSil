#include <iostream>
#include <fstream>
using namespace std;
void first(int*);
void second(float*);
int all(int, int*, float*);

int main() {
	int xx = 1234;
	int yy[5];
	float zz[3];
	all(xx, yy, zz);
}

int all(int ii, int *jj, float *kk) {
	first(jj);
	second(kk);
	ofstream aa("mybin4.dat");
	if (!aa) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	aa << ii << endl;
	for (int i = 0; i < 5; i++) { aa << jj[i] << endl; }
	for (int i = 0; i < 3; i++) { aa << kk[i] << endl; }
	aa.close();
}
void first(int* ii) {
	for (int i = 0; i < 5; i++) { ii[i] = (i + 1) * 1000 * 5; }
}
void second(float* ii) {
	for (int i = 0; i < 3; i++) { ii[i] = (i - 1) * 0.5 * (i - 1) * 0.5; }
}