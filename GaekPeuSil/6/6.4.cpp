#include <iostream> 
using namespace std;
void multx(int n, int* ii, int x) {
    for (int i = 0; i < n; i++) ii[i] = i * x;
    return;
}
int main() {
    int a[10];
    multx(4, a, 5);   // 0 5 10 15
    multx(6, a + 4, 10);   // 0 10 20 30 40 50
    for (int i = 0; i < 10; i++) cout << " i " << a[i] << endl;
}