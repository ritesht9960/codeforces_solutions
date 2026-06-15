#include<bits/stdc++.h> 
#define intt long long
#define vi vector<intt>
#define pb push_back
#define p pair
#define l list
#define lb lower_bound
#define up upper_bound  
using namespace std;
intt lcm(intt x,intt y)
{
    return (x/__gcd(x,y))*y;
}

void solve()
    {
        intt n,j=0,x;
        cin>>n;
        intt a[200005],b[200005];
        for(intt i=0;i<n;i++)
            {
                cin>>a[i];
            }
        for(intt i=n-1;i>=0;i--)
            {
                if(j%2==0 && a[i]>0)
                    {
                        b[j++]=i+1;
                    }
                else if(j%2==1 && a[i]<0)
                    {
                        b[j++]=i+1;
                    }
            }
        cout<<j<<endl;
        for(intt i=0;i<j;i++)
            {
                cout<<b[i]<<" ";
            }
        cout<<endl;
        return ;
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    intt T;
    cin>>T;
    for(size_t i=0;i<T;i++)
    {
        solve();
    }
    return 0;
}