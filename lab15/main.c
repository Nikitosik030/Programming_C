#include <stdio.h>
#include <string.h>

void xor_crypt(char *str, const char *key) {
    size_t key_len = strlen(key);
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] ^= key[i % key_len]; // Применяем XOR с ключом
    }
}

int main() {
    char text[256];
    char key[32];

    printf("Введите текст: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; // Удаляем символ новой строки

    printf("Введите ключ: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    // Шифрование
    xor_crypt(text, key);
    printf("Зашифрованный текст: %s\n", text);

    // Дешифрование (XOR обратим)
    xor_crypt(text, key);
    printf("Расшифрованный текст: %s\n", text);

    return 0;
}
