#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        for(i=0;i<s.size();i++)
        {
            if(i%2==0)
               cout<<s[i];
        }
        cout<<"  ";
        for(i=0;i<s.size();i++)
        {
            if(i%2!=0)
               cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
