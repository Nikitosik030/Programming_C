#include <stdio.h>
#include <string.h>

void xor_crypt(char *str, const char *key) {
    size_t key_len = strlen(key);
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] ^= key[i % key_len]; // ��������� XOR � ������
    }
}

int main() {
    char text[256];
    char key[32];

    printf("������� �����: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // ������� ������ ����� ������

    printf("������� ����: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    // ����������
    xor_crypt(text, key);
    printf("������������� �����: %s\n", text);

    // ������������ (XOR �������)
    xor_crypt(text, key);
    printf("�������������� �����: %s\n", text);

    return 0;
}
