#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *ptr;
};
struct node *start;
void create()
{
    struct node *temp,*nnode;
    nnode=(struct node*)malloc(sizeof(struct node));
    printf("enter first data\n");
    scanf("%d",&nnode->data);
    start=nnode;
    temp=nnode;
    for(int i=0;i<4;i++)
    {
        nnode=(struct node*)malloc(sizeof(struct node));
         printf("enter new data\n");
        scanf("%d",&nnode->data);
        temp->ptr=nnode;
        temp=nnode;
    }
    temp->ptr=NULL;
}
void max()
{
    struct node *temp;
    temp=start;
    int max;
    max=temp->data;
    temp=temp->ptr;
    while(temp!=NULL)
    {
        if(max<temp->data)
        {
            max=temp->data;
        }
        temp=temp->ptr;
    }
    printf("\n max = %d\n",max);
}
void min()
{
    struct node *temp;
    temp=start;
    int min;
    min=temp->data;
    temp=temp->ptr;
    while(temp!=NULL)
    {
        if(min>temp->data)
        {
            min=temp->data;
        }
        temp=temp->ptr;
    }
    printf(" min = %d\n",min);
}
void display()
{
    struct node *temp;
    temp=start;
    printf("the list is\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->ptr;
    }
}
int main()
{
    create();
    display();
    max();
    min();
    return 0;
}

