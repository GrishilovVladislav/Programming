#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int amountOfWords(int n) {
    if (1 > n || n > 100) {
        printf("Enter the number of words in matrix (from 1 to 100): ");
        scanf("%d", &n);
    }
    return n;
}

int summ(char* ch) {
    int sum = 0;
    for (unsigned i = 0; i < 30; i++) {
        if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')) {
            sum += ch[i];
        }
    }
    printf("\nsum: %d", sum);
    return sum;
}

int main() {
    char str[30];
    char ch;
    int x = 0;
    int n = amountOfWords(3);
    for (int i = 0; i < n; i++) {
        x = 0;
        printf("Enter your word (in English): ");
        while ((ch = getchar()) != '\n') {
            str[x] = ch;
            x++;
        }
        str[x] = '\0';
        int sum = summ(str);
        if (sum % 2 == 0) {
            printf("\n");
            for (int i = x; i > -1; i--) {
                printf("%c", str[i]);
            }
        }
        printf("\n");
    }   
    puts(str);
}