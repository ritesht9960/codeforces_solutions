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
        intt n,a[10000],total,x,maxi=0,mini=99999;
        cin>>n;
        for(intt i=0;i<n;i++)
            {
                cin>>a[i];
                if(a[i]>maxi)
                    {
                        maxi=a[i];
                    }
                if(a[i]<mini)
                    {
                        mini =a[i];
                    }
            }
        x=(maxi+mini)/2;
        x=max(abs(x-mini),abs(x-maxi));
        cout<<x<<endl;
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