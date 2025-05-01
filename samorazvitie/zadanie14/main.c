#include <stdio.h>
#include <stdlib.h>

// ��������� �������� �����
typedef struct StackNode {
    int data;
    struct StackNode* next;
} StackNode;

// ��������� �����
typedef struct {
    StackNode* top;
    int size;
} Stack;

// ������� �������� ������ �������� �����
StackNode* createStackNode(int data) {
    StackNode* newNode = (StackNode*)malloc(sizeof(StackNode));
    if (!newNode) {
        printf("������ ��������� ������\n");
        return NULL;
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// ������� ������������� �����
void initStack(Stack* stack) {
    stack->top = NULL;
    stack->size = 0;
}

// ������� �������� ������� �����
int isEmpty(Stack* stack) {
    return stack->size == 0;
}

// ������� ���������� �������� � ����
void push(Stack* stack, int data) {
    StackNode* newNode = createStackNode(data);
    if (stack->top) {
        newNode->next = stack->top;
    }
    stack->top = newNode;
    stack->size++;
}

// ������� �������� �������� �� �����
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("���� ����\n");
        return -1; // ��� ������ ��� ������
    }
    int data = stack->top->data;
    StackNode* temp = stack->top;
    stack->top = stack->top->next;
    free(temp);
    stack->size--;
    return data;
}

// ������� ��������� �������� �������� �����
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("���� ����\n");
        return -1; // ��� ������ ��� ������
    }
    return stack->top->data;
}

// ������ ������������� �����
int main() {
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("������� �������: %d\n", peek(&stack)); // 30
    printf("��������� �������: %d\n", pop(&stack)); // 30
    printf("������� ������� ����� ��������: %d\n", peek(&stack)); // 20

    return 0;
}
