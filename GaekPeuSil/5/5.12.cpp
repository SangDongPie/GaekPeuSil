#include <iostream>
using namespace std;
int main() {
	int** dat2;
	dat2 = new int* [3];
	dat2[0] = new int* [2];
	for (int i = 0; i < 2; i++) {
		dat2[i][0] = i * 5;
		dat2[i][1] = i * 6;
	}
	for (int i = 0; i < 3; i++) {
		cout << dat2[0][i] << dat2[1][0] << endl;
	}
	cout << " &dat2 " << &dat2 << endl;
	cout << " &dat2[0] " << &dat2[0] << " dat2[0] " << dat2[0] << endl;
	cout << " &dat2[1] " << &dat2[1] << " dat2[1] " << dat2[1] << endl;
	for (int i = 0; i < 3; i++) delete dat2[i];
	delete[] dat2;
	return 123;
}
//Array 에 저장하는 방법?