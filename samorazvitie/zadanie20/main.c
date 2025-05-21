#include <stdio.h>

// функция для обмена двух элементов
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// функция для сортировки массива методом пузырька
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// функция для вывода массива
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;

    printf("Введите количество элементов в массиве: ");
    scanf("%d", &n);

    int arr[n];

    printf("Введите %d элементов:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Исходный массив: ");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Отсортированный массив: ");
    printArray(arr, n);

    return 0;
}
