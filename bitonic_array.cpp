#include <bits/stdc++.h>
using namespace std;
int main() {
    int i=0,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    i=0;
    int k = n-1;
    while(i!=k)
    {
        if(a[i]<a[i+1])
        {
            i++;
        }
        if(a[k]<a[k-1])
        {
            k--;
        }
        if(i==k)
        {
            cout<<"YES"<<endl;
            break;
        }
         if(a[i]>a[i+1] && a[k]>a[k-1])
        {
            cout<<"NO"<<endl;
            break;
        }
    }
    return 0;
}
