#include <iostream>
using namespace std;
class fruit {
public:
	fruit() {
		price = 200; many = 2; day = 12;
	}
	fruit(float p, int n, int i) {
		price = p;
		many = n;
		day = i;
	}
	int many;
	float price;
	int day;
	float show() {
		return price * many;
	}
	void show_all() {
		cout << many << endl;
		cout << price << endl;
		cout << day << endl<< "\n";
	}
};

int main() {
	fruit apple, pear, peach, mango;
	pear = fruit(300, 5, 5);
	peach = fruit(1000, 5 , 7);
	mango = fruit(700, 8, 9);
	pear.show_all();
	apple.show_all();
	peach.show_all();
	mango.show_all();
	return 123;
	}