#include <iostream>
using namespace std;

class a {
public:
    float x, y, * aa = nullptr;
    ~a() {
        if (aa != nullptr) {
            delete aa; // error now
            cout << " done \n";
        }
        else { cout << " none \n"; };
    }
};

void main() {
    a b;
    b.~a();
    cout << b.x << "  ";
    b.aa = new float[10000];
    b.x = 200;
    b.aa[10] = 100;
    cout << b.x << "  ";
    cout << b.aa[10] << endl;
    b.~a();
    cout << b.x << "  ";
    cout << b.aa[10] << endl;
}
