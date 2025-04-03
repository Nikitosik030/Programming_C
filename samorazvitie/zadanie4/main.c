#include <stdio.h>

int fibonacci(int n) {
    if (n <= 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;

    printf("Vvedite chislo dlya vychisleniya chisla Fibonnachi: ");
    scanf("%d", &num);

    printf("Chislo Fibonnachi dlya %d: %d\n", num, fibonacci(num));

    return 0;
}
