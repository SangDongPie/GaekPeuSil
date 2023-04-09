#include <iostream>
using namespace std;
void main() {
	int i;
	short* sa;

	i = 0x12345;
	cout << "   i = 0x" << hex << i << endl;

	sa = (short*)&i;
	*sa = 0xab;
	sa[1] = 0x916;

	cout << "   i = 0x" << hex << i << endl;
	cout << "   sa[0] = 0x" << hex << sa[0] << endl;
	cout << "   sa[1] = 0x" << hex << sa[1] << endl;
}