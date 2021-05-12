#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

int enterAndCheck(int n) {
    if (3 > n || n > 100) {
        printf("Enter the N-number (from 3 to 100): ");
        scanf("%d", &n);
        enterAndCheck(n);
    }
    return n;
}
void matrixAndCount(int n) {
    srand(time(NULL));
    int** matrix = (int**)malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++) {
        int* matrix = (int*)malloc(n * sizeof(int));
    }
    for (int i = 0; i < n; i++) {
        matrix[i] = (int*)malloc(n * sizeof(int));
        if (matrix[i] == NULL) {
            for (int k = 0; k < i; k++) free(matrix[k]);
            free(matrix);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            matrix[i][k] = rand() % 10;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("\n ");
        for (int k = 0; k < n; k++) {
            printf("%d ", matrix[i][k]);
        }
    }
    int SS = 0, SN = 0, SW = 0, SE = 0;
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < n; k++) {
            if (i == k || n - i - 1 == k || n - k - 1 == i) {
            }
            else {
                if (i < k) {
                    if (k < n - i - 1) {
                        SN = SN + matrix[i][k];
                    } 
                    else {
                        SE = SE + matrix[i][k];
                    }
                }
                if (i > k) {
                    if (i > n - k - 1) {
                        SS = SS + matrix[i][k];
                    }
                    else {
                        SW = SW + matrix[i][k];
                    }
                }
            }
        }
    }
    printf("\n ========================");
    printf("\n %d \n", SN);
    printf(" %d \n", SS);
    printf(" %d \n", SW);
    printf(" %d \n", SE);
}
int main() {
    int n = 0;
    n = enterAndCheck(n);
    matrixAndCount(n);
}