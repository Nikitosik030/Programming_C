#include <stdio.h>

// функция для вывода массива на экран
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// функция для нахождения суммы элементов массива
int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// функция для нахождения максимального элемента массива
int max_array(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int size;

    printf("Введите размер массива: ");
    scanf("%d", &size);

    int arr[size];

    printf("Введите элементы массива: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Массив: ");
    print_array(arr, size);

    int sum = sum_array(arr, size);
    printf("Сумма элементов массива: %d\n", sum);

    int max = max_array(arr, size);
    printf("Максимальный элемент массива: %d\n", max);

    return 0;
}
