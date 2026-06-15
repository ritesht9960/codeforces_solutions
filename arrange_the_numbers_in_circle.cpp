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
        intt n,x,count=0,count2=0,count3=0,sum=0,flag=0n;
        vi a;
        cin>>n;
        for(intt i=0;i<n;i++)
            {
                cin>>x;
                a.pb(x);
                if(x>=2)
                    {
                        sum+=x;
                        flag++;
                        count2=x/2;
                    }
                if(x==1)
                    {
                        count++;
                    }
            }
        if(--flag)
            {
                count2-=flag;
            }
        count=min(count,count2);
        cout<<sum+count<<endl;
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