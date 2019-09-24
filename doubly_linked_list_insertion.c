#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev,*next;
};
struct node  *start = NULL;

void insert()
{
	struct node *nnode,*temp;
	printf("enter total nodes\n");
	int i,n;
	scanf("%d",&n);
	nnode = (struct node*)malloc(sizeof(struct node));
	printf("enter first data\n");
	scanf("%d",&nnode->data);
	start = nnode;
	nnode->prev=NULL;
	temp = nnode;
	for(i=1;i<n;i++)
	{
		nnode = (struct node*)malloc(sizeof(struct node));
		printf("enter new node\n");
		scanf("%d",&nnode->data);
		temp->next = nnode;
		nnode->prev = temp;
		temp=nnode;
	}
	temp->next=NULL;
}

void display()
{
	struct node *temp;
	if(start == NULL)
	{
		printf("no elements are in the list\n");
	}
	else
	{
		temp = start;
		while(temp!=NULL)
		{
			printf("%d ",temp->data);
			temp = temp->next;
		}
	}
}

void insert_beg()
{
	struct node *nnode,*temp;
	temp = start;
	nnode = (struct node*)malloc(sizeof(struct node));
	printf("\nenter data to insert at beginning\n");
	scanf("%d",&nnode->data);
	start = nnode;
	nnode->prev=NULL;
	nnode->next=temp;
	temp->prev=nnode;
}

void insert_last()
{
	struct node *temp,*nnode;
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	nnode = (struct node*)malloc(sizeof(struct node));
	printf("\nenter data to insert at last\n");
	scanf("%d",&nnode->data);
	temp->next=nnode;
	nnode->prev=temp;
	nnode->next=NULL;
}

void insert_middle()
{
	struct node *temp,*nnode;
	int n,i;
	printf("\nenter position of insertion between linked list\n");
	scanf("%d",&n);
	temp=start;
	for(i=1;i<n-1;i++)
	{
		temp=temp->next;
	}
	nnode = (struct node*)malloc(sizeof(struct node));
	printf("\nenter data to be inserted at position %d\n",n);
	scanf("%d",&nnode->data);
	nnode->prev=temp;
	nnode->next=temp->next;
	temp->next->prev=nnode;
	temp->next=nnode;
}

void main()
{
	insert();
	display();
	insert_beg();
	display();
	insert_last();
	display();
	insert_middle();
	display();
}
