#include <stdio.h>
#include <stdlib.h>
#include "matrix_operations.h"

int main() {
    int n;

    printf("Vvedite razmernost' matric (n): ");
    scanf("%d", &n);

    double **matrix1 = (double **)malloc(n * sizeof(double *));
    double **matrix2 = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        matrix1[i] = (double *)malloc(n * sizeof(double));
        matrix2[i] = (double *)malloc(n * sizeof(double));
    }

    printf("Vvedite elementy pervoy matrici:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix1[i][j]);
        }
    }

    printf("Vvedite elementy vtoroy matrici:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%lf", &matrix2[i][j]);
        }
    }

    char operation;
    printf("Vvedite znak operacii (+, -, *): ");
    scanf(" %c", &operation);

    result = matrix_operation(matrix1, matrix2, n, operation);

    printf("Rezultat:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%.2lf ", result[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++) {
        free(matrix1[i]);
        free(matrix2[i]);
        free(result[i]);
    }
    free(matrix1);
    free(matrix2);
    free(result);

    return 0;
}
