#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,cnt;
    cin>>t;
    char E[100][100];
    for(i=0;i<t;i++)
    {
        cnt=0;
        cin>>E[i];
        for(j=0;j<strlen(E[i]);j++)
        {
            if(E[i][j]=='+' || E[i][j]=='*' || E[i][j]=='-' || E[i][j]=='/')
            {
                if(E[i][j+1]=='+' || E[i][j+1]=='*' || E[i][j+1]=='-' || E[i][j+1]=='/')
                {
                    cnt++;
                }
            }
        }
        if(cnt==0)
        {
            cout<<"valid"<<endl;
        }
        else
        {
            cout<<"invalid "<<cnt<<endl;
        }
    }
    return 0;
}
