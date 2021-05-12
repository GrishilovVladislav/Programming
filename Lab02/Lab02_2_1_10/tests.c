#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	double x = 2100;
	assert(calculate(100, 2020, 2500, 1000) == x);
	x = 12300;
	assert(calculate(10000, 2018, 3000, 1000) == x);
	x = 18600;
	assert(calculate(15000, 2008, 3500, 3000) == x);
    printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}