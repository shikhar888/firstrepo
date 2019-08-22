#include<conio.h>
#include<stdio.h>
void main()
{
int i,j,k;
clrscr();
//for upper half
for(i=1;i<=5;i++)
{
for(j=5-i;j>=1;j--)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("*");
printf(" ");
}
printf("\n");
}
//for lower half
	for(i=1;i<=4;i++)
	{
	for(j=1;j<=i;j++)
	{
	printf(" ");
	}
	for(k=i;k<=4;k++)

	{
	printf("*");
	printf(" ");
	}
	printf("\n");
	}
getch();
}
