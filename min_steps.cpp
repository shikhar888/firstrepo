#include<bits/stdc++.h>
using namespace std;
    int main()
    {
        int n;
        cin>>n;
        int cnt = 0;
        if(n<1)
        {
            cout<<"enter no. greater than 0";
        }
        else{
        while(n>0)
        {
            if(n<=1)
            {
                cout<<cnt;
                break;
            }
            else if(n<4 && n>1)
            {
                cout<<cnt+1;
                break;
            }
            else
            {
                n=n/3;
                cnt++;
            }
        }}
        return 0;
    }
