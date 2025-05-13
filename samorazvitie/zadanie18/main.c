#include <stdio.h>

// ������� ��� ������ ������� �� �����
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ������� ��� ���������� ����� ��������� �������
int sum_array(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// ������� ��� ���������� ������������� �������� �������
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

    printf("������� ������ �������: ");
    scanf("%d", &size);

    int arr[size];

    printf("������� �������� �������: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("������: ");
    print_array(arr, size);

    int sum = sum_array(arr, size);
    printf("����� ��������� �������: %d\n", sum);

    int max = max_array(arr, size);
    printf("������������ ������� �������: %d\n", max);

    return 0;
}
