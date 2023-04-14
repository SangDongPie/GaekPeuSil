#include <iostream>
using namespace std;
int main() {
	int a[4] = { 100,200,300,400 };
	float b[3] = { 11.2, 0.5, 0.3 };
	char c[5] = { 'h', 'a', 'p', 'p', 'y' };
	for (auto c : a) { cout << c << endl; }
	for (auto d : b) { cout << d << endl; }
	for (auto e : c) { cout << e << endl; }
	for (auto i : a) {
		for (auto j : b) cout << i + j << endl;
	}
}