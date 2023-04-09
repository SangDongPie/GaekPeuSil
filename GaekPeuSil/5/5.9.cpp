#include <iostream>
using namespace std;
int main(){
	int data[10], * d1, * d2;
	cout << data << "   " << &data << endl;
	d1 = new int[5];
	cout << d1 << "   " << &d1 << endl;

	for (int i = 0; i < 5; i++) data[i] = (i + 1) * 5;

	d2 = data + 3;
	cout << d2[-2] << "   " << data[1] << endl;
	cout << d2[1] << "   " << data[4] << endl;
}