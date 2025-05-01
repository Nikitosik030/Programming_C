#include <stdio.h>
#include <stdlib.h>

// Структура элемента стека
typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

// Структура стека
typedef struct {
    StackNode* top;
    int size;
} Stack;

// Функция создания нового элемента стека
StackNode* createStackNode(int data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (!newNode) {
        printf("Ошибка выделения памяти\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Функция инициализации стека
void initStack(Stack* stack) {
    stack->top = NULL;
    stack->size = 0;
}

// Функция проверки пустоты стека
int isEmpty(Stack* stack) {
    return stack->size == 0;
}

// Функция добавления элемента в стек
void push(Stack* stack, int data) {
    StackNode* newNode = createStackNode(data);
    if (stack->top) {
        newNode->next = stack->top;
    }
    stack->top = newNode;
    stack->size++;
}

// Функция удаления элемента из стека
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Стек пуст\n");
        return -1; // или другой код ошибки
    }
    int data = stack->top->data;
    StackNode* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    stack->size--;
    return data;
}

// Функция просмотра верхнего элемента стека
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Стек пуст\n");
        return -1; // или другой код ошибки
    }
    return stack->top->data;
}

// Пример использования стека
int main() {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Верхний элемент: %d\n", peek(&stack)); // 30
    printf("Удаленный элемент: %d\n", pop(&stack)); // 30
    printf("Верхний элемент после удаления: %d\n", peek(&stack)); // 20

    return 0;
}
