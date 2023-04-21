#include<iostream>
#include<fstream>
using namespace std;

class FC {
public:
	FC() {};
	FC(float cc) { c = cc; f = getF(); };
	float c, f;
	float getF() { return (c * 9. / 5. + 32.0); }
	float getC() { return ((f - 32.0) * 5. / 9.); }
};

class CITY {
public:
	CITY() {
		for (int i = 0; i < 12; i++) {
			CF[i] = i + 5;
		}
	};
	FC CF[12];
};

int main() {
	FC CF1(36.5);
	CITY seoul;
	for (int i = 0; i < 12; i++) {
		cout << seoul.CF[i].f << endl;
	}
	return 0;
}



