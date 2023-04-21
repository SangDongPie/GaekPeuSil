#pragma once
#include "fruit.h"
class store {
public:
	store() {};
	store(int a, int b, int c, float d, float e, float f) {
		apple = fruit(a, d);
		pear = fruit(b, d);
		peach = fruit(c, f);
		mango = fruit(b,e);
	}
	fruit apple, pear, peach, mango;
	float total();
};
