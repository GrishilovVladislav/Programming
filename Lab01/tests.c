#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	assert(is_perfect(1, 2) == 1 / 5);
	assert(is_perfect(2, 0) == 1 / 3);
	assert(is_perfect(2, 1) == 1 / 18);
    printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}