#include <stdio.h>
#include <stdlib.h>

#define MAX 100 // Maksimal'nyy razmer steka

typedef struct Stack {
    int items[MAX];
    int top;
} Stack;

// Funkciya dlya sozdaniya steka
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1; // Iznachal'no stek pust
    return stack;
}

// Funkciya dlya proverki, pust li stek
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Funkciya dlya proverki, polon li stek
int isFull(Stack* stack) {
    return stack->top == MAX - 1;
}

// Funkciya dlya dobavleniya elementa v stek
void push(Stack* stack, int item) {
    if (isFull(stack)) {
        printf("Stek polon! Nevozmozhno dobavit' element %d\n", item);
        return;
    }
    stack->items[++stack->top] = item;
    printf("Element %d dobavlen v stek\n", item);
}

// Funkciya dlya udaleniya elementa iz steka
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stek pust! Nevozmozhno udalit' element\n");
        return -1; // Vozvrashchaem -1 dlya oboznacheniya oshibki
    }
    return stack->items[stack->top--];
}

// Funkciya dlya otobrazheniya soderzhimogo steka
void display(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stek pust!\n");
        return;
    }
    printf("Soderzhimoe steka: ");
    for (int i = stack->top; i >= 0; i--) {
        printf("%d ", stack->items[i]);
    }
    printf("\n");
}

int main() {
    Stack* stack = createStack();
    int choice, value;

    while (1) {
        printf("\nMenþ:\n");
        printf("1. Dobavit' element (push)\n");
        printf("2. Udalit' element (pop)\n");
        printf("3. Pokazat' stek\n");
        printf("4. Vykhod\n");
        printf("Vyberite deystvie: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Vvedite element dlya dobavleniya: ");
                scanf("%d", &value);
                push(stack, value);
                break;
            case 2:
                value = pop(stack);
                if (value != -1) {
                    printf("Udalennyy element: %d\n", value);
                }
                break;
            case 3:
                display(stack);
                break;
            case 4:
                free(stack); // Osvobodit' pamyat'
                printf("Vykhod...\n");
                return 0;
            default:
                printf("Nevernyy vybor! Pozhaluysta, poprobuyte eshche raz.\n");
        }
    }

    return 0;
}
