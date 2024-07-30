#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}
void insertAtEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
    } else {
        struct Node* current = *head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("Doubly linked list is empty.\n");
        return;
    }
    if ((*head)->data == key) {
        struct Node* temp = *head;
        *head = (*head)->next;
        if (*head != NULL) {
            (*head)->prev = NULL;
        }
        free(temp);
        return;
    }
    struct Node* current = *head;
    while (current != NULL && current->data != key) {
        current = current->next;
    }
    if (current == NULL) {
        printf("Key not found in the list.\n");
        return;
    }
    if (current->prev != NULL) {
        current->prev->next = current->next;
    }
    if (current->next != NULL) {
        current->next->prev = current->prev;
    }
    free(current);
}
void printList(struct Node* head) {
    struct Node* current = head;
    printf("Doubly Linked List (Forward): ");
    while (current != NULL) {
        printf("%d  ", current->data);
        current = current->next;
    }
    printf("\n");
    printf("Doubly Linked List (Reverse): ");
    while (current != NULL) {
        current = current->prev;
    }
    current = head;
    while (current != NULL) {
        printf("%d  ", current->data);
        current = current->next;
    }
    printf("\n");
}
int main() {
    struct Node* head = NULL;
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    printf("Initial Doubly Linked List:\n");
    printList(head);
    deleteNode(&head, 2);
    printf("Doubly Linked List after deleting 2:\n");
    printList(head);
    return 0;
}
