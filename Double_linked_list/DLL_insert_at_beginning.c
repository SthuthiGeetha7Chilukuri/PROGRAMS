/*Double linked list insert at beginning*/

#include <stdio.h>
#include <stdlib.h>

struct node 	//struct members declarations

{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

void insert_node_beginning(struct node *new_node);
void print_list();

int main() {
    int choice = 1, insert = 0;
    struct node *new_node;

    while (choice) {
        new_node = (struct node*)malloc(sizeof(struct node));
        new_node->next = NULL;
        new_node->prev = NULL;

        if (insert == 1) {
            printf("Enter beginning node data:\n");
            scanf("%d", &new_node->data);
            insert_node_beginning(new_node);
        } else {
            printf("Enter new node data:\n");
            scanf("%d", &new_node->data);

            if (head == NULL) {
                head = tail = new_node;
            } else {
                tail->next = new_node;
                new_node->prev = tail;
                tail = new_node;
            }
        }

        printf("Do you want to add more nodes (1: Yes, 0: No)?\n");
        scanf("%d", &choice);
        if (choice) {
            printf("Do you want to insert at beginning (1: Yes, 0: No)?\n");
            scanf("%d", &insert);
        }
    }

    print_list();

    return 0;
}

void insert_node_beginning(struct node *new_node)   //INsert node at beggining function defination

{
    if (head == NULL) {
        head = tail = new_node;
    } else {
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
    }
}

void print_list() 	//printf nodes data and address  function defination

{
    struct node *temp = head;
    while (temp != NULL) {
        printf("%d   ", temp->data);
        printf("Prev: %p   ", temp->prev);
        printf("Next: %p\n", temp->next);
        temp = temp->next;
    }
    printf("\n");
}

