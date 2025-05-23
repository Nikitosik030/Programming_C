#include <stdio.h>
#include <stdint.h>

int count_bits_long(long num) {
    int count = 0;
    unsigned long unum = *(unsigned long*)&num;

    while (unum) {
        count += unum & 1;
        unum >>= 1;
    }
    return count;
}

int count_bits_double(double num) {
    int count = 0;
    uint8_t *bytes = (uint8_t*)&num;

    for (size_t i = 0; i < sizeof(double); i++) {
        uint8_t byte = bytes[i];
        while (byte) {
            count += byte & 1;
            byte >>= 1;
        }
    }
    return count;
}

int main() {
    long lnum;
    double dnum;

    printf("Vvedite celoe chislo tipa long: ");
    scanf("%ld", &lnum);

    printf("Vvedite chislo tipa double: ");
    scanf("%lf", &dnum);

    printf("Kolichestvo edinichnyh bitov v long (%ld): %d\n", lnum, count_bits_long(lnum));
    printf("Kolichestvo edinichnyh bitov v double (%f): %d\n", dnum, count_bits_double(dnum));

    return 0;
}
