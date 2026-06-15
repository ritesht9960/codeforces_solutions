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
        intt a,b;
        cin>>a>>b;
        if(a%2==0 && b%2==0)
            {
                cout<<a*b/2+2<<endl;
            }  
        else if(a%2!=0 && b%2!=0)
            {
                cout<<a*b+1<<endl;
            }
        else if(a%2==0 && b%2!=0)
            {
                cout<<"-1"<<endl;
            }
        else if(a%2!=0 && b%2==0 &&b%4==0)
            {
                cout<<a*b/2+2<<endl;
            }
        else
            {
                cout<<"-1"<<endl;
            }
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