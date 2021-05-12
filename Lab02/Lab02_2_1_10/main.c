#include <stdio.h>
#include "main.h"

double calculate(double price, int year, double engine, double dist) {
	double customs;
	double run;
	double finalPrice;
	int commonYear;

	commonYear = 2021 - year;
	run = 0.5 * dist;
	if (commonYear < 3) {
		customs = 0.6 * engine;
	}
	if (3 <= commonYear <= 10) {
		if (engine < 2500) {
			customs = 0.35 * engine;
		}
		if (engine >= 2500) {
			customs = 0.6 * engine;
		}
	}
	if (10 < commonYear < 14) {
		customs = 0.6 * engine;
	}
	if (14 <= commonYear) {
		customs = 2 * engine;
	}
	finalPrice = price + customs + run;
	printf("The Price of customs = %lf\n", customs);
	printf("The Price of run = %lf\n", run);
	printf("The Full price = %lf\n", finalPrice);
	return finalPrice;
}
void info() {
	printf("Version 1.0      Created by Grishilov Vladislav\n");
}
int main() {
	calculate(15000, 2008, 3500, 3000);
	info();
}