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
#define cred(arr, n) ({ \
    double _sum = 0; \
    for (int i = 0; i < (n); i++) { \
        _sum += (arr)[i]; \
    } \
    _sum / (n); })


int main() {
    int count;
    printf("Vvedite kolichestvo chisel: ");
    scanf("%d", &count);

    int *numbers = (int*)malloc(count * sizeof(int));
    printf("Vvedite %d chisel cherez probel: ", count);
    for (int i = 0; i < count; i++) {
        scanf("%d", &numbers[i]);
    }

    double cr = cred(numbers, count);
    int max_num = MAX(numbers, count);
    printf("Maksimalnoe chislo: %d\n", max_num);
    printf("cred-arifm: %.2f\n", cr );

    free(numbers);
    return 0;
}
