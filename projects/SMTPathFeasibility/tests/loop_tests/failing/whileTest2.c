#include <stdlib.h>

int main(int argc, char** argv) {
	int a,b,c,d,e;
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	c = atoi(argv[3]);
	d = atoi(argv[4]);
	#pragma smt init[a%2=0]
	#pragma smt [a < b, b < c, d > a + b]
	while(a < d) {
		if (a%2 == 0) {
		a = a + b;
		}
		else {
		b = b + c;
		}
	}
	return 0;
}
