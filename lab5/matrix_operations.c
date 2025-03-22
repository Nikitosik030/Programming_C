#include <stdlib.h>
#include <stdio.h>
#include "matrix_operations.h"

double **matrix_operation(double **matrix1, double **matrix2, int n, char operation) {
    double **result = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        result[i] = (double *)malloc(n * sizeof(double));
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            switch (operation) {
                case '+':
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    break;
                case '-':
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    break;
                case '*':
                    result[i][j] = 0;
                    for (int k = 0; k < n; k++) {
                        result[i][j] += matrix1[i][k] * matrix2[k][j]; //
                    }
                    break;
                default:
                    printf("Neizvestnaya operaciya!\n");
            }
        }
    }

    return result;
}
