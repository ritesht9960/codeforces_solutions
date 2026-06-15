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
void fun(string s,intt n)
    {
        intt x,t=0,i=0;
        cin>>x;
        while(x!=0)
            {
                if(i==n)
                    {
                        i=0;
                    }
                if(s[i]=='A')
                    {
                        i++;
                        x--;
                        t++;
                    }
                else if(s[i++]=='B')
                    {
                        x=x/2;
                        t++;
                    }
            }
        cout<<t<<endl;
        return ;
    }
void solve()
    {
       intt n,q;
       string s;
       cin>>n>>q;
       cin>>s;
       for(intt i=1;i<=q;i++)
        {
            fun(s,n);
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