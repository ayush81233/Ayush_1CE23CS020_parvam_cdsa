#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};



struct Node* deleteHead(struct Node* head)
{
    if (head == NULL)
        return NULL;
    struct Node* temp = head;
    head = head->next;

    free(temp);
    return head;
}
void printList(struct Node* head)
{
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
struct Node* createNode(int data)
{
    struct Node* node
        = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main()
{
    struct Node* head = createNode(1);
    head->next = createNode(2);
    head->next->next = createNode(3);
    head->next->next->next = createNode(4);
    head->next->next->next->next = createNode(5);

    printf("Original list: ");
    printList(head);
    head = deleteHead(head);

    printf("List after deleting the head: ");
    printList(head);

    return 0;
}
