#include <stdio.h>
#include <string.h>

void xor_crypt(char* text, const char* key) {
    size_t key_len = strlen(key);
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] ^= key[i % key_len];  // ��������� XOR � �������� �����
    }
}

int main() {
    char text[256];
    char key[32];
    int choice;

    printf("1. ��������� �����\n");
    printf("2. ����������� �����\n");
    printf("�������� ��������: ");
    scanf("%d", &choice);
    getchar();  // ������� ����� �����

    printf("������� �����: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // ������� ������ ����� ������

    printf("������� ����: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    // ��������� XOR-����������/������������
    xor_crypt(text, key);

    printf("���������: %s\n", text);

    return 0;
}
