
#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	Tree tree;
	string str = "Programming";
	for (auto i : str) {
		tree.insert(i);
	}
	assert(tree.countNodes("a") == 0);
	assert(tree.countNodes("m") == 2);
	assert(tree.countNodes("i") == 0);
	printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}