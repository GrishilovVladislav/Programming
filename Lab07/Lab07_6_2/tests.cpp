
#include <assert.h>
#include <stdio.h>
#include <string>

#include "main.h"

void test() {
	string str = GetStudentName();
	assert(str == "Putin");
	str = GetStudentName();
	assert(str == "Gonchar");
	str = GetStudentName();
	assert(str == "Obeme");
	str = GetStudentgroupNumber();
	assert(str == "053501");
	str = GetStudentgroupNumber();
	assert(str == "100000");
	str = GetStudentgroupNumber();
	assert(str == "053504");
	int t = test();
	assert(t == 40);
	int t = test();
	assert(t == 10);
	int t = test();
	assert(t == 0);
	printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}