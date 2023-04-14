#include<iostream>
using namespace std;
void main() {
	int c;
	cout << " Give me 100, 200, 300, 400." << endl;
	cin >> c;
	while (c <= 400) {
		if (c == 100) cout << "1hundread" << endl;
		else if (c == 200) cout << "2hundread" << endl;
		else if (c == 300) cout << "3hundread" << endl;
		else if (c == 400) cout << "4hundread" << endl;
		else cout << "don't know" << endl;
		cin >> c;
	}
}