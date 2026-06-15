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
            intt x;
            set<int> t;
            for(size_t i=0;i<2;i++)
                {
                    cin>>x; 
                    t.insert(x);
                }
            cout<<t.insert(5).second<<endl;
            cout<<t.insert(6).second<<endl;
            cout<<t.size()<<endl;
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
