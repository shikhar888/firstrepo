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
	p=start;
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
void display()
{
	node *temp,*p;
	p=start;
	while(p!=NULL)
	{
		cout<<p->info<<"  ";
		p=p->link;
	}
}
int main()
{
	create();
	display();
	getch();
    return 0;
}
