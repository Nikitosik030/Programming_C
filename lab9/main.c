#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 256

double calculate(char *expression) {
    char *token;
    double result = 0;
    double num;
    int sign = 1;

    token = strtok(expression, " ");
    while (token != NULL) {
        if (isdigit(token[0]) || (token[0] == '-' && isdigit(token[1]))) {
            num = atof(token);
            result += sign * num;
            sign = 1;
        } else if (token[0] == '+') {
            sign = 1;
        } else if (token[0] == '-') {
            sign = -1;
        }

        token = strtok(NULL, " ");
    }

    return result;
}

int main() {
    char input[MAX_INPUT_LENGTH];

    printf("Vvedite vyrazhenie: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = 0;

    char modifiedInput[MAX_INPUT_LENGTH * 3];
    char *ptr = input;
    char *dst = modifiedInput;
    while (*ptr != '\0') {
        if (*ptr == '+' || *ptr == '-') {
            *dst++ = ' ';
            *dst++ = *ptr;
            *dst++ = ' ';
        } else {
            *dst++ = *ptr;
        }
        ptr++;
    }
    *dst = '\0';

    double result = calculate(modifiedInput);
    printf("Result: %.2f\n", result);

    return 0;
}
