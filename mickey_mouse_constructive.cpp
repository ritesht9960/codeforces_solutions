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
        intt x,y,count;
        cin>>x>>y;
        int temp=abs(x-y);
        if(temp%2==0)
            {
                count=(temp+2)/2;
            }
        else if(temp==1)
            {
                count=1;
            }
        else 
            {
                count=2;
            }
        cout<<count%676767677<<endl;
        for(intt i=1;i<=x;i++)
            {
                cout<<"1"<<" ";
            }
        for(intt i=0;i<y;i++)
            {
                cout<<"-1"<<" ";
            }
        cout<<endl;
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