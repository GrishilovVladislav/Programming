#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	float x = 1 / 5;
	assert(is_perfect(1, 2) == x);
	x = 1 / 3;
	assert(is_perfect(2, 0) == x);
	x = 1 / 18;
	assert(is_perfect(2, 1) == x);
    printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}
