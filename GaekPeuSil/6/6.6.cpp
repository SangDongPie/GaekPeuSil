#include <iostream>
using namespace std;
void G2K(int, float*, float*);
void K2G(int, float*, float*);
void main() {
	float gram[] = { 20.0, 30., 100. }, kilo[3];
	G2K(3, gram, kilo);
	kilo[0] =  40.0;
	kilo[1] = 70.0;
	kilo[2] = 95.0;
	K2G(3, gram, kilo);
}
void CFout(int n, float* C, float* F) {
	cout << "   G   " << "  K  " << endl;
	for (int i = 0; i < n; i++)
		cout << "   " << C[i] << "   " << F[i] << endl;
}
void G2K(int n, float* G, float* K) {
	for (int i = 0; i < n; i++) K[i] = G[i] / 1000;
	CFout(n, G, K);
}
void K2G(int n, float* g, float* k) {
	for (int i = 0; i < n; i++) g[i] = k[i] * 1000;
	CFout(n, g, k);
}