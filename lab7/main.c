#include <stdio.h>
#include <string.h>

#define MAX_NAME_LENGTH 50
#define NUM_HUMANS 4

typedef struct {
    char firstName[MAX_NAME_LENGTH];
    char lastName[MAX_NAME_LENGTH];
    int birthYear;
} human;

void sortHumansByYear(human *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (array[j].birthYear > array[j + 1].birthYear) {
                human temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main() {
    human humans[NUM_HUMANS];

    printf("Vvedite dannye o %d lyudyakh (Imya Familiya GodRozhdeniya):\n", NUM_HUMANS);
    for (int i = 0; i < NUM_HUMANS; i++) {
        printf("Chelovek %d: ", i + 1);
        scanf("%s %s %d", humans[i].firstName, humans[i].lastName, &humans[i].birthYear);
    }


    sortHumansByYear(humans, NUM_HUMANS); 


    printf("\nOtsortirovannye dannye po godu rozhdeniya:\n");
    for (int i = 0; i < NUM_HUMANS; i++) {
        printf("%s %s %d\n", humans[i].firstName, humans[i].lastName, humans[i].birthYear);
    }

    return 0;
}
