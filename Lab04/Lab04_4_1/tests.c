
#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	x = 3;
	assert(amountOfWords == x);
	int x = summ(str);
	assert(summ(str) == x);

	printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}