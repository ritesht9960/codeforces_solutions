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
        cin>>n;
        vi d;
        for(intt i=0;i<n;i++)
            {
                cin>>x;
                d.pb(x);
            }
        while(d.size()!=1)
            {
                if(abs(d[0])>abs(d[1])) 
                    {
                        if(d[0]>d[1])
                            {
                                sum+=d[0];
                                d.erase(d.begin(),d.begin()+1);
                            }
                        else
                            {
                                sum-=d[1];
                                d.erase(d.begin()+1,d.begin()+2);
                            }
                    }
                else    
                    {
                        if(d[0]>d[1])
                            {
                                sum-=d[1];
                                d.erase(d.begin()+1,d.begin()+2);
                            }
                        else
                            {
                                sum+=d[1];
                                d.erase(d.begin(),d.begin()+1);
                            }
                    }
            }
        cout<<sum<<endl;
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