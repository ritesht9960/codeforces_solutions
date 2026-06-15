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
       intt n,b[200005],count=0;
       cin>>n;
       for(size_t i=0;i<n;i++)
        {
            cin>>b[i];
            if(b[i]!=0)
                {
                    count++;
                }
        } 
        cout<<count+1<<endl;
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