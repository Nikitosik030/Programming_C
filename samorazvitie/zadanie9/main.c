#include <stdio.h>

void kalkulator() {
    double num1, num2;
    char operation;

    printf("Vvedite pervoe chislo: ");
    scanf("%lf", &num1);
    printf("Vvedite operatsiyu (+, -, *, /): ");
    scanf(" %c", &operation);
    printf("Vvedite vtoroe chislo: ");
    scanf("%lf", &num2);

    switch (operation) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            } else {
                printf("Oshibka: delenie na nol'!\n");
            }
            break;
        default:
            printf("Nedopustimaya operatsiya!\n");
    }
}

int main() {
    int choice;
    do {
        printf("\nMenyu:\n");
        printf("1. Kalkulator\n");
        printf("2. Vykhod\n");
        printf("Vyberite deystvie: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                kalkulator();
                break;
            case 2:
                printf("Vykhod...\n");
                break;
            default:
                printf("Nevernyy vybor. Pozhaluysta, poprobuyte snova.\n");
        }
    } while (choice != 2);

    return 0;
}
