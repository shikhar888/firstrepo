#include<stdio.h>
void main()
{
   int t,i,n,l,k;
   

  
   scanf("%d",&t);

   for(i=0;i<t;i++)
   {
      
      scanf("%d",&n);

      l=n%6;
      k=n/6;
      if((l==0)&&(k%2==1))
      {
	 printf("%d WS\n",(n+1));
      }
      else if((l==0)&&(k%2==0))
      {
	 printf("%d WS\n",(n-11));
      }
      else
      {
	 if(k%2==0)
	 {
	    switch(l)
	    {
	       case 1:
	       printf("%d WS\n",n+11);
	       break;
	       case 2:
	       printf("%d MS\n",n+9);
	       break;
	       case 3:
	       printf("%d AS\n",n+7);
	       break;
	       case 4:
	       printf("%d AS\n",n+5);
	       break;
	       case 5:
	       printf("%d MS\n",n+3);
	    }
	 }
	 else
	 {
	    switch(l)
	    {
	       case 1:
	       printf("%d WS\n",n-1);
	       break;
	       case 2:
	       printf("%d MS\n",n-3);
	       break;
	       case 3:
	       printf("%d AS\n",n-5);
	       break;
	       case 4:
	       printf("%d AS\n",n-7);
	       break;
	       case 5:
	       printf("%d MS\n",n-9);
	    }
	 }
      }
   }
   
}
