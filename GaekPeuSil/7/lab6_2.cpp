#include <iostream>
using namespace std;
void main() {
	int N=5,sum = 1;
	int n;
	cout << "   n*(n-1)...";	
	for (int n = 1; n < N+1 ; n++) sum = sum * n;
		cout << sum << endl;

}
