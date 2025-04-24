#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Запрашиваем имя пользователя
    printf("Введите ваше имя: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Удаление символа новой строки

    // Запрашиваем возраст пользователя
    printf("Введите ваш возраст: ");
    scanf("%d", &age);

    // Выводим приветственное сообщение
    printf("Привет, %s! Вам %d лет.\n", name, age);

    return 0;
}
