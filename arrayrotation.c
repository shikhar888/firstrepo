#include<stdio.h>
#include<conio.h>
void main()
{
  int i,d,arr[5],j,temp;
  clrscr();
  printf("Enter the array :\n");
  for(i=0;i<5;i++)
  scanf("%d",&arr[i]);

  printf("Entered array is:\n");
  for(i=0;i<5;i++)
  printf("%d ",arr[i]);

  printf("\n");
  printf("enter the total rotation elements: ");
  scanf("%d",&d);

  for(i=0;i<d;i++)
  {
     temp=arr[0];
     for(j=0;j<4;j++)
     {
     arr[j]=arr[j+1];
     }
     arr[j]=temp;
  }

  printf("the rotated array is:\n");
  for(i=0;i<5;i++)
  {
  printf("%d ",arr[i]);
  }
  getch();
}



