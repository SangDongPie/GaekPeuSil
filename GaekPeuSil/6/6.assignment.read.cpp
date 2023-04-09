#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int xx, yy[5];
	float zz[3];
	cout << "mybin" << endl;
	ifstream aa("mybin.dat");
	if (!aa) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
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
	cout << "mybin2" << endl;
	ifstream bb("mybin2.dat");
	if (!bb) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	bb >> xx;
	cout << xx << endl;
	for (int i = 0; i < 5; i++) {
		bb >> yy[i];
		cout << yy[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		bb >> zz[i];
		cout << zz[i] << endl;
	}
	bb.close();
	cout << "mybin3" << endl;
	ifstream cc("mybin3.dat");
	if (!cc) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	cc >> xx;
	cout << xx << endl;
	for (int i = 0; i < 5; i++) {
		cc >> yy[i];
		cout << yy[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		cc >> zz[i];
		cout << zz[i] << endl;
	}
	cc.close();
	cout << "mybin4" << endl;
	ifstream dd("mybin4.dat");
	if (!dd) return 666;  // 만일 파일이 열리지 않으면 프로그램을 끝낸다. 
	dd >> xx;
	cout << xx << endl;
	for (int i = 0; i < 5; i++) {
		dd >> yy[i];
		cout << yy[i] << endl;
	}
	for (int i = 0; i < 3; i++) {
		dd >> zz[i];
		cout << zz[i] << endl;
	}
	dd.close();
}
