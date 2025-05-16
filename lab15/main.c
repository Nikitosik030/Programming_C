#include <stdio.h>

void print_forward(int n) {
    if (n >= 10) {
        print_forward(n / 10);
    }
    printf("%d ", n % 10);
}

void print_backward(int n) {
    printf("%d ", n % 10);
    if (n >= 10) {
        print_backward(n / 10);
    }
}

int main() {
    int n;

    printf("Vvedite natural'noe chislo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Vvedeno ne natural'noe chislo.\n");
        return 1;
    }

    printf("Cifry chisla v pryamom poryadke: ");
    print_forward(n);
    printf("\n");

    printf("Cifry chisla v obratnom poryadke: ");
    print_backward(n);
    printf("\n");

    return 0;
}
