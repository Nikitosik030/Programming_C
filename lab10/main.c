#include <stdio.h>

int main() {
    int n;

    printf("������� �����: ");
    scanf("%d", &n);

    printf("�������� ����� �� 1 �� %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d � �������� ����� %d\n", i, i * i);
    }

    return 0;
}
