#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertEnd(struct Node** head, int data) {
    struct Node* newNode = createNode(data);
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Function to delete a node with a given key
void deleteNode(struct Node** head, int key) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = *head;
    struct Node* prev = NULL;

    // If the node to be deleted is the head node
    if (temp != NULL && temp->data == key) {
        *head = temp->next;
        free(temp);
        printf("Node with value %d deleted.\n", key);
        return;
    }

    // Search for the node to be deleted
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // Node not found
    if (temp == NULL) {
        printf("Node with value %d not found.\n", key);
        return;
    }

    // Unlink the node from the list
    prev->next = temp->next;
    free(temp);
    printf("Node with value %d deleted.\n", key);
}

// Function to search for a node with a given key
void search(struct Node* head, int key) {
    struct Node* temp = head;
    while (temp != NULL) {
        if (temp->data == key) {
            printf("Node with value %d found.\n", key);
            return;
        }
        temp = temp->next;
    }
    printf("Node with value %d not found.\n", key);
}

// Function to print the linked list
void printList(struct Node* head) {
    struct Node* temp = head;
    if (temp == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    struct Node* head = NULL;  // Start with an empty list


    insertEnd(&head, 10);
    insertEnd(&head, 20);
    insertEnd(&head, 30);
    insertEnd(&head, 40);
    insertEnd(&head, 50);
    printList(head);

    search(head, 30);
    search(head, 60);

    deleteNode(&head, 20);
    deleteNode(&head, 60);

    printList(head);

    return 0;
}