#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void sieve_of_eratosthenes(int n) {
    bool* is_prime = malloc((n + 1) * sizeof(bool));

    for (int i = 0; i <= n; i++) {
        is_prime[i] = true;
    }

    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    printf("Prostie chisla do %d:\n", n);
    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            printf("%d\n", i);
        }
    }

    free(is_prime);
}

int main() {
    int n;
    printf("Vvedite chislo: ");
    scanf("%d", &n);

    if (n >= 2) {
        sieve_of_eratosthenes(n);
    } else {
        printf("Vvedite chislo bolshee ili ravnoe 2.\n");
    }

    return 0;
}
