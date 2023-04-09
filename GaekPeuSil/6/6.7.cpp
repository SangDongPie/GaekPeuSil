#include <iostream>
using namespace std;
void PrintMe(int ii) {
	cout << "  I am " << ii << "  years old.\n";
}
void PrintMe(float xx) {
	cout << "  I am " << xx << "  cm tall.\n";
}
void PrintMe(short zz) {
	cout << "  I weight " << zz << " kg.\n";
}

void PrintMe(int ii, float xx, short zz) {
	PrintMe(ii);
	PrintMe(xx);
	PrintMe(zz);
}
void main() {
	float height = 180.0;
	int age = 22;
	short weight = 60;
	PrintMe(age);
	PrintMe(height);
	PrintMe(weight);
	PrintMe(age, height, weight);
	getchar();
}