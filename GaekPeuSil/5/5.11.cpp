#include <iostream>
using namespace std;
void main() {
	int data[3][2] = { {1,2}, { 3,4}, {5,6} };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) cout << data[i][j] << " ";
		cout << endl;
	}
	cout << endl;
	data[1][2] = -3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) cout << data[i][j] << " ";
		cout << endl;
	}
}