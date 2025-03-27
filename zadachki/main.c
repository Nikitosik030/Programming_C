#include <stdio.h>

int sum_of_numbers(int start, int end, int even) {
    int total = 0;
    for (int number = start; number <= end; number++) {
        if ((even && number % 2 == 0) || (!even && number % 2 != 0)) {
            total += number;
        }
    }
    return total;
}

int main() {
    int start, end, choice;

    printf("Vvedite nachalnoe znachenie diapazona: ");
    if (scanf("%d", &start) != 1) {
        printf("Oshibka vvoda. Pozhaluysta, vvedite tseloe chislo.\n");
        return 1;
    }

    printf("Vvedite konechnoe znachenie diapazona: ");
    if (scanf("%d", &end) != 1 || end < start) {
        printf("Oshibka vvoda. Pozhaluysta, vvedite tseloe chislo, bol'sheye ili ravno nachalu diapazona.\n");
        return 1;
    }

    printf("Vybirite tip chisel dlya summirovaniya:\n");
    printf("1. Chetnye chislà\n");
    printf("2. Nechetnye chislà\n");
    printf("Vash vybor: ");
    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Oshibka vvoda. Pozhaluysta, vyberite 1 ili 2.\n");
        return 1;
    }

    int even = (choice == 1);
    int result = sum_of_numbers(start, end, even);

    if (even) {
        printf("Summa chetnykh chisel ot %d do %d ravna %d.\n", start, end, result);
    } else {
        printf("Summa nechetnykh chisel ot %d do %d ravna %d.\n", start, end, result);
    }

    return 0;
}
