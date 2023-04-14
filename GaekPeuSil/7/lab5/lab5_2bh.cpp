#include "lab5_2.h"
void gkgout(int n, float* g, float* kg) {
	cout << "   g   " << "    kg  " << endl;
	for (int i = 0; i < n; i++)
		cout << "   " << g[i] << "   " << kg[i] << endl;
}
void g2kg(int n, float* g, float* kg) {
	for (int i = 0; i < n; i++) kg[i] = g[i] / 1000.;
	gkgout(n, g, kg);
}
void kg2g(int n, float* g, float* kg) {
	for (int i = 0; i < n; i++) g[i] = kg[i] * 1000;
	gkgout(n, g, kg);
}
