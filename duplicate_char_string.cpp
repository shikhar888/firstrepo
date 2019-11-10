#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,cnt;
    char s[20];
    cin>>s;
    for(i=0;i<strlen(s)-1;i++)
    {
        if(s[i]=='0')
        {
            continue;
        }
        cnt=0;
        for(j=i+1;j<strlen(s);j++)
        {
             if(s[i]==s[j] && s[i]!=' ')
             {
                 cnt++;
                 s[j]='0';
             }
        }
        if(cnt>0)
        {
            cout<<s[i]<<" ";
        }
    }
    return 0;
}
