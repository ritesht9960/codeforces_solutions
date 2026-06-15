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
       intt n,x,sum=0;
        vi a,b;
        cin>>n;
        for(intt i=0;i<n;i++)
            {
                cin>>x;
                a.pb(x);
            }
        for(intt i=0;i<n;i++)
            {
                cin>>x;
                b.pb(x);
                if(a[i]>b[i])
                    {
                        b[i]=a[i];
                        a[i]=x;
                    }
                sum+=b[i];
            }
        intt maxx=0;
        for(intt i=0;i<n;i++)
            {
                if(a[i]>maxx)
                    {
                        maxx=a[i];
                    }
            }
        cout<<sum+maxx;
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