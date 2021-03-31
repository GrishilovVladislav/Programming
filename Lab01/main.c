#include <stdio.h>
#include "main.h"

float func(int n, float f) {
	float answer1 = 0;
	float answer = 1;
	for (int i = 1; i < n + 1; i++) {
		for (int k = 0; k < i + 1; k++) {
			answer1 = answer1 + k + f;
		}
		answer = answer * (1 / answer1);
		answer1 = 0;
	}
	return (answer);
}

int main() {
	printf("Enter the numbers ");
	int n;
	float f;
	scanf("%d", &n);
	scanf("%f", &f);
	float result = func(n, f);
	printf("Result - %f", result);
}