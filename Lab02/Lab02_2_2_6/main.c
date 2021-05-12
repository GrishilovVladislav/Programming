#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double func(double x, double e) {
    
    double left = sin(x);
    int n = 1;    
    double denominator = 1;
    double numerator = x;
    double right = x;
    double fact = 2;

    while (fabs(right - left) >= e) {
        numerator *= x * x;
        denominator *= fact * (fact + 1);
        right += (n % 2 == 0 ? 1 : -1) * (numerator / denominator);
        fact += 2;
        n++;
    }
    return n;
}

int main() {
    double x;
    double e;
    printf("Enter x : ");
    while (!scanf("%lf", &x)) {
        while (getchar() != '\n');
        printf("Enter correct x: \n");
    }
    printf("Enter e : ");
    while (!scanf("%lf", &e)) {
        while (getchar() != '\n');
        printf("Enter correct e: \n");
    }      
    int answer = func(x, e);
    printf("\nThe Answer is %d", answer);
}