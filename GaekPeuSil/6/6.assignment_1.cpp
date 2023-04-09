#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int xx = 1234;
	int yy[5];
	float zz[3];
	cout << xx << endl;
	for (int i = 0; i < 5; i++) {
		yy[i] = (i+1) * 1000 * 5;
		cout << yy[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		zz[i] = (i - 1) * 0.5* (i - 1) * 0.5;
		cout << zz[i] << endl;
	}
	ofstream aa("mybin.dat");
	if (!aa) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	aa << xx << endl;
	for (int i = 0; i < 5; i++) {
		aa << yy[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		aa << zz[i] << endl;
	}
	aa.close();
}