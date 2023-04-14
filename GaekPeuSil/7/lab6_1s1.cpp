#include <iostream>
using namespace std;
void main() {
	char c = 'a';

	cout << c << "\n";

	if (c == 'a') { cout << " I know .\n"; }
	else if (c == 'b') { cout << " I know .\n"; }
	else if (c == 'c') { cout << " I know .\n"; }
	else if (c == 'd') { cout << " I know .\n"; }
	else { cout << " I do not know " << c << ".\n"; }
}