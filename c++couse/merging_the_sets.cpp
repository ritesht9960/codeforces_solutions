#include<bits/stdc++.h> 
#define intt long long
#define vi vector<intt>
#define pb push_back
#define lb lower_bound
#define up upper_bound  
using namespace std;
intt lcm(intt x,intt y)
{
    return (x/__gcd(x,y))*y;
}

void solve()
    {
        intt n,m,x,sum=0;
        cin>>n>>m;
        vi a,b,c;
        for(intt i=0;i<n;i++)
            {
                cin>>x;
                a.pb(x);
                sum+=x;
                for(intt j=0;j<a[i];j++)
                    {
                        cin>>x;
                        b.pb(x);
                        c[x]++;
                    }
            }
        for(intt i=1;i<=m;i++)
            {
                if(c[i]==0)
                    {
                        cout<<"NO"<<endl;
                        return ;
                    }
            }
        if(!(sum-m))
            {
                cout<<"NO"<<endl;
                return ;
            }
        vector<pair<intt,pair<intt,intt>>> p;
        for(intt i=0;i<m;i++)
            {
                
            }
        
        

        
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