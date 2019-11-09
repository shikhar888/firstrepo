#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int p,n,t,i,j,k;
    cin>>p>>t;
    for(i=0;i<t;i++)
    {
        long long int cnt=0;
        cin>>n;
        if(n<=3 && p>0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            for(j=2;j<=n/2;j++)
            {
                if(n%j==0)
                {
                    bool isPrime = true;
                    if(j==2 || j==3)
                    {
                        cnt++;
                        if(cnt>=p)
                        {
                            cout<<"YES"<<endl;
                            j=n;
                        }
                    }
                    else
                    {
                        for(k=2;k<=j/2;k++)
                        {
                            if(j%k==0)
                            {
                                isPrime = false;
                                k=j;
                            }
                        }
                        if(isPrime)
                        {
                            cnt++;
                            if(cnt>=p)
                            {
                                cout<<"YES"<<endl;
                                j=n;
                            }
                        }
                    }
                }
            }
            if(cnt<p)
            {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}
