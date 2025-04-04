#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 100
#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

void sozdanie_fayla() {
    FILE *file = fopen(INPUT_FILE, "w");

    fprintf(file, "Иванов Пётр Сергеевич  1975\n");
    fprintf(file, "Сидоров Николай Андреевич 1981\n");
    fprintf(file, "Козловский Аркадий Семёнович 1978\n");
    fprintf(file, "Петрова Анна Викторовна 1985\n");
    fprintf(file, "Смирнов Алексей Игоревич 1990\n");

    fclose(file);
}

void filtraciya_zapisei() {
    FILE *inputFile = fopen(INPUT_FILE, "r");
    FILE *outputFile = fopen(OUTPUT_FILE, "w");
    char line[MAX_LINE_LENGTH];

    while (fgets(line, sizeof(line), inputFile)) {
        int year;
        sscanf(line, "%*s %*s %*s %d", &year);
        if (year > 1980) {
            fprintf(outputFile, "%s", line);
        }
    }

    fclose(inputFile);
    fclose(outputFile);
}

int main() {
    sozdanie_fayla();
    filtraciya_zapisei();

    printf("Zapisi, otnosyashchiesya k rodivshimysya pozdnee 1980 goda, zapisany v fayl %s\n", OUTPUT_FILE);

    return 0;
}
