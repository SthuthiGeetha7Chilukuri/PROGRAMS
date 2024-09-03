#include<stdio.h>
#include<stdlib.h>
struct node * reverse_list(struct node *);

struct node
{
	int data;
	struct node * next;
};
void main()
{
	struct node *temp=NULL,*head=NULL,*new_node;
	int choice=1;
	while(choice)
	{
		new_node=(struct node*)malloc(sizeof(struct node*));
		printf("Enter new node data\n");
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
		printf("Do you want to add new node 1:0\n");
		scanf("%d",&choice);
	}
	/*temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
		printf("%p  \n",temp->next);
		temp=temp->next;
	}*/
	reverse_list(head);
}
struct node * reverse_list(struct node * head)
{

	struct node *prev,*next,*curr,*temp;
	prev=0;
	curr=next=head;
	while(next!=NULL)
	{
		next=next->next;
		curr->next=prev;
		prev=curr;
		curr=next;
	}
	head=prev;
	temp=head;
	while(temp!=NULL)
	{
		printf("%d ",temp->data);
                printf("%p  \n",temp->next);
                temp=temp->next;
	}
}

