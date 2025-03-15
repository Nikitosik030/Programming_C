#include <stdio.h>

int main() {
    double matrix1[3][3];
    double mainDiagonalSum = 0.0;
    double secondaryDiagonalSum = 0.0;

    printf("vvedite elementi matrici 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("element [%d][%d]: ", i, j);
            scanf("%lf", &matrix1[i][j]);
            if (i == j) {
                mainDiagonalSum += matrix1[i][j]; 
            }
            if (i + j == 2) {
                secondaryDiagonalSum += matrix1[i][j]; 
            }
        }
    }

    
    printf("cymma elementov glavnou diagonali: %.2lf\n", mainDiagonalSum);
    printf("cymma elementov pobochnou diagonali: %.2lf\n", secondaryDiagonalSum);

    int matrix2[2][2];

    printf("\nvvedite elementi matrici 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("element [%d][%d]: ", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("\nkvadrat matrici 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            int squareValue = matrix2[i][j] * matrix2[i][j];
            printf("%d ", squareValue);
        }
        printf("\n");
    }

    return 0;
}
