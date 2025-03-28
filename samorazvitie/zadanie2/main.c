#include <stdio.h>

unsigned long long factorial(int n) {
    if (n < 0) {
        return 0;
    }
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int number;

    printf("Vvedite chislo dlya vychisleniya faktorila: ");
    if (scanf("%d", &number) != 1) {
        printf("Oshibka vvoda. Pozhaluysta, vvedite tseloe chislo.\n");
        return 1;
    }

    unsigned long long result = factorial(number);
    if (result == 0 && number < 0) {
        printf("Faktoril otnitsatel'nogo chisla ne opredelen.\n");
    } else {
        printf("Faktoril chisla %d raven %llu.\n", number, result);
    }

    return 0;
}
