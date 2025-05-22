#include <stdio.h>
#include <stdbool.h>

bool is_prime(int number) {
    if (number <= 1) return false;
    if (number == 2) return true;
    if (number % 2 == 0) return false;

    for (int i = 3; i * i <= number; i += 2) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num;

    printf("������� ����� ��� ��������: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d - ������� �����\n", num);
    } else {
        printf("%d - �� �������� ������� ������\n", num);
    }

    return 0;
}
