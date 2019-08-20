#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    long int n,i,c=0,c1=0,j,val=1;
    scanf("%ld",&n);
    char a[10000],b[10000];
    while(val<=n)
    {
       c=0,c1=0;
    scanf("%s\n%s",&a,&b);
        for(i=0;i<strlen(a);i++)
        {
            for(j=0;j<strlen(b);j++)
            {
                if(a[i]==b[j])
                {
                    a[i]='*';
                    b[j]='*';
                    break;
                }
            }
        }
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]!='*')
            {
                c++;
            }
        }
        for(i=0;i<strlen(b);i++)
        {
            if(b[i]!='*')
            {
                c1++;
            }
        }
    printf("%ld\n",c+c1);
    val++;
    }
    
}
