#include <stdio.h>
int main()
{
    int i,j;
    int a[4][3] , b[4][3] , c[2][2];
    printf(" TABLE FOR AND GATE\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d ",&a[i][j]);
        }
        a[i][2]=a[i][j-1] * a[i][j-2];
    }
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf(" TABLE FOR OR GATE\n");
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d ",&b[i][j]);
        }
        b[i][2]=b[i][j-1] + b[i][j-2];
        if(b[i][2]==2)
        {
            b[i][2]=1;
        }
    }
     for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("TABLE FOR NOT GATE IS\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<1;j++)
        {
            scanf("%d ",&c[i][j]);
        }
        if(c[i][j-1]==0)
        {
            c[i][j]=1;
        }
        else
        {
            c[i][j]=0;
        }
    }
     for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
