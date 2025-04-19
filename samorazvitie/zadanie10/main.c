#include <stdio.h>

int main() {
    int n;

    printf("¬ведите число: ");
    scanf("%d", &n);

    printf(" вадраты чисел от 1 до %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d в квадрате равно %d\n", i, i * i);
    }

    return 0;
}
