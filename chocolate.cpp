#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,d,m,cnt=0,sum;
    cin>>n;
    int s[n];
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    cin>>d>>m;
    for(i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<i+m;j++)
        {
            sum+=s[j];
        }
        if(sum==d)
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}
