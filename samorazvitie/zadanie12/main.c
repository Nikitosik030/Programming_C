#include <stdio.h>

int main() {
    char name[100];
    int age;

    // ����������� ��� ������������
    printf("������� ���� ���: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // �������� ������� ����� ������

    // ����������� ������� ������������
    printf("������� ��� �������: ");
    scanf("%d", &age);

    // ������� �������������� ���������
    printf("������, %s! ��� %d ���.\n", name, age);

    return 0;
}
