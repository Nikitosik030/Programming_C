#include <stdio.h>
#include <stdlib.h>

#define MAX(arr, n) ({ \
    int _max = (arr)[0]; \
    for (int i = 1; i < (n); i++) { \
        if ((arr)[i] > _max) { \
            _max = (arr)[i]; \
        } \
    } \
    _max; })

int main() {
    int count;
    printf("Vvedite kolichestvo chisel: ");
    scanf("%d", &count);

    int *numbers = (int*)malloc(count * sizeof(int));
    printf("Vvedite %d chisel cherez probel: ", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    int max_num = MAX(numbers, count);
    printf("Maksimalnoe chislo: %d\n", max_num);

    free(numbers);
    return 0;
}
