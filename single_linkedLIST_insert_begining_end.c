#include<stdio.h>
#include<stdlib.h>
struct node * new_func(struct node *);
struct node * insert_beginning(struct node *);
struct node * insert_end(struct node *);
struct node
{
        int data;
        struct node * next;
};

void main()
{
        int choice=1,ins=0;
        struct node* temp=NULL, *head=NULL;
        while(choice)
        {
              temp=new_func(temp);
                if(head==NULL)
                {
                        head=temp;
                }
        //        temp=new_func(temp);
                printf("insert at beginning 1:2:0?\n");
                scanf("%d",&ins);
                if(ins==1)
                head=insert_beginning(head);
                if(ins==2)
                temp=insert_end(temp);


                printf("continue\n");
                scanf("%d",&choice);
        }
        temp=head;
        while(temp!=0)
        {
                printf("%d  ",temp->data);
                printf("%p  ",temp);
                printf("%p  \n",temp->next);
                temp=temp->next;
        }
}
struct node *new_func(struct node* temp)
{
        struct node *new_node;
        new_node=(struct node *)malloc(sizeof(struct node *));
                printf("Enter a new node data\n");
        scanf("%d",&new_node->data);
//      new_node->next=NULL;
        if(temp==NULL)
                temp=new_node;
        temp->next=new_node;
        temp=new_node;

        return temp;

}
struct node *insert_beginning(struct node* head)
{
        struct node * new_node;
        //printf("insert node data at beginning\n");
        new_node=(struct node *)malloc(sizeof(struct node *));
        printf("insert node data at beginning\n");

        scanf("%d",&new_node->data);
        new_node->next=head;
        head=new_node;
        return head;
}
struct node *insert_end(struct node* temp)
{
        struct node * new_node;
        new_node=(struct node *)malloc(sizeof(struct node));
        printf("Enter end node data\n");
        scanf("%d",&new_node->data);
        temp->next=new_node;
        temp=new_node;
        return temp;
}


