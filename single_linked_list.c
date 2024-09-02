#include<stdio.h>
#include<stdlib.h>
struct node
{
        int data;
        struct node * next;
};

int main()
{
        struct node *head=NULL,*temp=NULL,*new_node=NULL;
        int choice=1;
        while(choice)
        {

        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter data\n");
        scanf("%d",&new_node->data);

        if(head==NULL)
        {
                head=temp=new_node;

        }
        else
        {
                temp->next=new_node;
                temp=new_node;
        }
        printf("continue?\n");
        scanf("%d",&choice);
        }
        temp=head;
        while(temp!=NULL)
        {
                printf("%d ",temp->data);
                printf("%p -> ",temp);
                printf("0x%x  ",temp->next);
                temp=temp->next;
        }
}


