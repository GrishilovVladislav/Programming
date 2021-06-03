
#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	list <int> x;
	list <int> y;
	list <int> z;
	x.push_back(1);
	x.push_back(0);
	x.push_back(0);
	y.push_back(5);
	y.push_back(6);
	z.push_back(4);
	z.push_back(4);
	assert(GetNumber ("100") == x);
	assert(GetNumber("56") == y);
	assert(GetNumber("44") == z);	
	assert(LongSubLong(x,y)) == z);
	assert(LongSumLong(x, y)) == GetNumber("156"));
	assert(LongMulLong(x, y)) == GetNumber("5600"));
	printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}