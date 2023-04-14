#include "lab5_2.h"
void main() {
	float g[] = { 20.0,30.,100. }, kg[3];
	g2kg(3, g, kg);
	kg[0] = 10.0;
	kg[1] = -40.0;
	kg[2] = 70.0;
	kg2g(3, g, kg);
}
