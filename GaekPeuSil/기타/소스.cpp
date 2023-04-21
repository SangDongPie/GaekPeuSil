#include <iostream>
#include <fstream>
using namespace std;
void main()
{
    const int pi = 3.141592;
    ofstream xx("sine.txt");
    float dt, xt, t = 0.0, f = 800.0, tmax = 0.1;
    dt = 1. / 810.0;
    for (t = 0; t < tmax; t += dt) {
        xt = 1000. * sin(2. * pi * f * t);
        cout << t << " " << xt << endl;
        xx << t << " " << xt << endl;
    }
    xx.close();
}
