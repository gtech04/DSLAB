#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} node;

node *head = NULL;

void InsertionBeginning() {
    int item;
    node *newNode;
    printf("Enter the data to be added: ");
    scanf("%d", &item);

    newNode = (node *)malloc(sizeof(node));
    newNode->data = item;
    newNode->next = head;
    head = newNode;
}

void InsertionEnd() {
    int item;
    node *newNode, *temp;
    printf("Enter the data to be added: ");
    scanf("%d", &item);

    newNode = (node *)malloc(sizeof(node));
    newNode->data = item;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void deleteBeginning() {
    if (head == NULL) {
        printf("Linked List is Empty\n");
    } else {
        node *temp = head;
        head = head->next;
        free(temp);
        printf("Deleted from beginning.\n");
    }
}

void deleteEnd() {
    if (head == NULL) {
        printf("Linked List is Empty\n");
    } else if (head->next == NULL) {
        free(head);
        head = NULL;
        printf("Deleted from end.\n");
    } else {
        node *temp = head;
        node *prev = NULL;

        while (temp->next != NULL) {
            prev = temp;
            temp = temp->next;
        }
        prev->next = NULL;
        free(temp);
        printf("Deleted from end.\n");
    }
}

void display() {
    if (head == NULL) {
        printf("Linked List is Empty\n");
    } else {
        node *temp = head;
        printf("Linked List: ");
        while (temp != NULL) {
            printf("%d\t", temp->data);
            temp = temp->next;
        }
        printf("\n");
    }
}

int main() {
    int choice;
    while (1) {
        printf("\n1. Insertion at Beginning\n2. Insertion at End\n");
        printf("3. Delete from Beginning\n4. Deletion from End\n");
        printf("5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                InsertionBeginning();
                break;
            case 2:
                InsertionEnd();
                break;
            case 3:
                deleteBeginning();
                break;
            case 4:
                deleteEnd();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Enter a valid choice\n");
        }
    }
}
