#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int i,j,k,x;
    int a[6];
    for(i=0;i<6;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<6;i++)
    {
        
             x=a[i];
             j=i-1;
             while(j>=0 && a[j]>x)
             {
                 a[j+1]=a[j];
                 j--;
             }
             a[j+1]=x;
    }
    for(i=0;i<6;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
