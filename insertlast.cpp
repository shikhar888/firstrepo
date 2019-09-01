#include<conio.h>
#include<iostream>
using namespace std;
struct node
{
	int info;
	node *link;
};
node *start=NULL;
void create()
{
	node *temp,*p;
	int n,i=1;
	cout<<"enter no. of nodes: ";
	cin>>n;
	temp=new node();
	cout<<"enter node data ";
	cin>>temp->info;
	temp->link=NULL;
	start=temp;
	p=temp;
	for(i=2;i<=n;i++)
	{
		temp=new node();
		cout<<"enter next node data ";
		cin>>temp->info;
		p->link=temp;
		p=p->link;
	}
	p->link=NULL;
}
void insert_beg()
{
	node *temp = new node();
	if(start==NULL)
	{
		cout<<"list is empty\n";
	}
		cout<<"\nenter new data for beginning ";
		cin>>temp->info;
	    temp->link=start;
    	start=temp;	
}
void insert_last()
{
	node *temp=start;
	while(temp->link!=NULL)
	{
		temp=temp->link;
	}
	node *new_node = new node();
	cout<<"\nenter the element to be inserted ";
	cin>>new_node->info;
	new_node->link=NULL; 
	temp->link=new_node;
}
void insert_after()
{
	int n;
	node *ptr,*temp;
	cout<<"\nenter data after which the next new node is to be inserted  ";
	cin>>n;
	ptr=start;
	while(ptr!=NULL)
	{
		if(ptr->info==n)
		{
			temp=new node();
			cout<<"enter data ";
			cin>>temp->info;
			temp->link=ptr->link;
			ptr->link=temp;
			break;
		}
		else
		{
			ptr=ptr->link;
		}
	}
	if(ptr==NULL)
	{
		cout<<"\nNo such element found\n";
	}
}
void delete_nth()
{
	int n;
	cout<<"\nenter position to be deleted ";
	cin>>n;
	node *temp=start;
	if(n==1)
	{
		start=temp->link;
		delete temp;
	}
	else
	{
		node *ptr=temp->link;
		for(int i=2;i<n;i++)
		{
			temp=temp->link;
			ptr=ptr->link;
		}
		temp->link=ptr->link;
		delete ptr;
	}
}
void display()
{
	node *temp,*p;
	p=start;
	cout<<"\nelements are\n";
	while(p!=NULL)
	{
		cout<<p->info<<"  ";
		p=p->link;
	}
}
int main()
{
	create();
	insert_beg();
	display();
	insert_after();
	display();
	delete_nth();
	display();
	insert_last();
	display();
	getch();
    return 0;
}
