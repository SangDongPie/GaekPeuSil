#include <iostream>
using namespace std;
float add(float n) {
	if (n < 2) return 1;
	else return n + add(n - 1);
}

	void main() {
	cout << "\n add number = ";
	float a;
	cin >> a;
	cout << a << " add =  " << add(a) << "\n";
}