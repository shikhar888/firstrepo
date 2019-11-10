#include <bits/stdc++.h>
using namespace std;
int reverse(char x[] , int l )
{
    if(l==0)
    {
        cout<<x[l];
        return 0;
    }
    cout<<x[l];
    l--;
    reverse(x,l);
}
int main()
{
    int l;
    char s[20];
    cin>>s;
    l = strlen(s)-1;
    cout<<s[l];
    l--;
    reverse(s,l);
    
    return 0;
}
