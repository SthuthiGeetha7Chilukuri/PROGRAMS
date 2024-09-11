#include<stdio.h>
#include<stdlib.h>

struct node
{
        int data;
        struct node *prev;
        struct node *next;
};

struct node *head, *new_node;

void main()
{
        int choice=1;
        struct node *temp;
        temp=head=NULL;
        while(choice)
        {
                new_node=(struct node*)malloc(sizeof(struct node));
                printf("Enter new node data\n");
                scanf("%d",&new_node->data);
                new_node->prev=NULL;
                new_node->next=NULL;
                if(head==NULL)
                {
                        head=temp=new_node;
                }
                else
                {
                        temp->next=new_node;
                        new_node->prev=temp;
                        temp=new_node;
                }
                printf("Do you want to add new node 1:0 \n");
                scanf("%d",&choice);
        }

        temp=head;
        while(temp!=NULL)
        {
                printf("%d  ",temp->data);
                printf("%p   ",temp->prev);
                printf("%p   \n",temp->next);
                temp=temp->next;
        }
}     
