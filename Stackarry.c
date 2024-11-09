#include <stdio.h>
#define MAX 5
int stack[MAX], top = -1, i = 0;
int item; void push() {
    if (top == MAX - 1) {
        printf("Overflow\n");
    } else {
        top++;
        stack[top] = item;
    }
}
void pop() {
    if (top == -1) {
        printf("Underflow\n");
    } else {
        printf("Popped item: %d\n", stack[top]);  // Optionally display the popped item
        top--;
    }
}
void display() {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements:\n");
        for (i = 0; i <= top; i++) {
            printf("%d\t", stack[i]);
        }
        printf("\n");
    }
}
void main() {
    int ch, x;
    do {
        printf("1: Push \n2: Pop \n3: Display\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &item);
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("INVALID\n");
        }
        printf("Continue? (1 for Yes, 0 for No): ");
        scanf("%d", &x);
    } while (x == 1);
}