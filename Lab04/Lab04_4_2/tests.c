
#include <assert.h>
#include <stdio.h>

#include "main.h"

void test() {
	char rus[] = { '�','�','�','�','�','�','�','�','�',
				 '�','�','�','�','�','�','�','�',
				 '�','�','�','�','�' };

	char en[] = { 'A','B','V','G','D','E','J','Z','I',
				  'K','L','M','N','O','P','R','C',
				  'T','Y','F','X','U' };
	assert(findChar('P',en,22) == 15);
	assert(findChar('�', rus, 22) == 2);

	printf("Got it\n");
}

#undef main

int main() {
	test();
	return 0;
}