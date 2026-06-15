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
bool fun(intt n,string x,char* temp1,char* temp2,int i)
    {
        if(x[i]!==*temp1 || x[i]==*temp2 || x[i]=='?')
            {
                return false;
            }
        i++;
        if(x[i-1]==*temp1 && x[i-1]==*temp2)
            {
                if(fun(n,x,temp1++,temp2,i)+fun(n,x,temp1,temp2--,i)) return true;
            }
        if(x[i-1]==*temp1)
            {
                temp1+1;
                if(fun(n,x,temp1,temp2,i)) return true;
            }
        else if(x[i-1]==*temp2)
            {
                temp2--;
                if(fun(n,x,temp1,temp2,i)) return true;
            }
        else if(x[i-1]=='?')
            {
                if(fun(n,x,temp1++,temp2,i)+fun(n,x,temp1,temp2--,i)) return true;
            }
        return false;
    }
void solve()
    {
        intt n;
        string x;
        cin>>n>>x;
        auto temp1=x.begin(),temp2=x.begin()+x.size()-1;
        int i=0;
        bool t=fun(n,x,temp1,temp2,i);
        if(t)
            {
                cout<<"YES\n";
                return ;
            }
        cout<<"NO\n";
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