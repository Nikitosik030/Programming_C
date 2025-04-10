#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    char playAgain;

    // Inicializiruem generator sluchaynykh chisel
    srand(time(0));

    do {
        // Generiruem sluchaynoe chislo ot 1 do 100
        number = rand() % 100 + 1;
        printf("Ya zagadal chislo ot 1 do 100. Poprobuyte ugadat' ego!\n");

        do {
            printf("Vvedite vashe predpolozhenie: ");
            scanf("%d", &guess);
            attempts++;

            if (guess > number) {
                printf("Slishkom mnogo! Poprobuyte snova.\n");
            } else if (guess < number) {
                printf("Slishkom malo! Poprobuyte snova.\n");
            } else {
                printf("Pozdravlyayu! Vy ugadili chislo %d za %d popytok.\n", number, attempts);
            }
        } while (guess != number);

        // Sprashivayem, khochet li pol'zovatel' sygrat' yeshche raz
        printf("Khotite sygrat' yeshche raz? (y/n): ");
        scanf(" %c", &playAgain);
        attempts = 0; // Sbrasyvayem kolichestvo popytok

    } while (playAgain == 'y' || playAgain == 'Y');

    printf("Spasibo za igru! Do svidaniya.\n");
    return 0;
}
