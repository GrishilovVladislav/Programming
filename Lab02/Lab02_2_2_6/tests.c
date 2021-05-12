#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	int x = 1;
	assert(func(1, 1) == x);
	x = 4;
	assert(func(1, 0.0001) == x);

    printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}