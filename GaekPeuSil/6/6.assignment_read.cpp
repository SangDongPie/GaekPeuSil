#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int xx, yy[5];
	float zz[3];
	ifstream aa("mybin4.dat");
	if (!aa) return 666;  // ���� ������ ������ ������ ���α׷��� ������. 
	aa >> xx;
	cout << xx << endl;
	for (int i = 0; i < 5; i++) {
		aa >> yy[i];
		cout << yy[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		aa >> zz[i];
		cout << zz[i] << endl;
	}
	aa.close();
}
