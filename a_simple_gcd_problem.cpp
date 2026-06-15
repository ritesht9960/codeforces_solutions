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
        intt n,x,count=0;
        vi a,b;
        cin>>n;
        for(size_t i=0;i<n;i++)
            {
                cin>>x;
                a.pb(x);
            }
        for(intt i=0;i<n;i++)
            {
                cin>>x;
                b.pb(x);
            }
        if(a[0]!=__gcd(a[0],a[1]))
            {
                count++;
            }
        if(a[n-1]!=__gcd(a[n-1],a[n-2]))
            {
                count++;
            }
        for(size_t i=1;i<n-1;i++)
            {
                if(__gcd(a[i],a[i+1])==__gcd(a[i],a[i-1]) && __gcd(a[i],a[i+1])!=a[i])
                    {
                        count++;
                    }
            }
        cout<<count<<endl;
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