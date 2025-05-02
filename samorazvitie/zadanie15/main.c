#include <stdio.h>
#include <string.h>

void xor_crypt(char* text, const char* key) {
    size_t key_len = strlen(key);
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] ^= key[i % key_len];  // Применяем XOR с символом ключа
    }
}

int main() {
    char text[256];
    char key[32];
    int choice;

    printf("1. Шифровать текст\n");
    printf("2. Дешифровать текст\n");
    printf("Выберите действие: ");
    scanf("%d", &choice);
    getchar();  // Очищаем буфер ввода

    printf("Введите текст: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  // Удаляем символ новой строки

    printf("Введите ключ: ");
    fgets(key, sizeof(key), stdin);
    key[strcspn(key, "\n")] = '\0';

    // Применяем XOR-шифрование/дешифрование
    xor_crypt(text, key);

    printf("Результат: %s\n", text);

    return 0;
}
