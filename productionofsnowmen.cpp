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
bool fun(vi &a,vi &b,intt i,intt n)
    {
        for(intt j=0;j<n;j++)
            {
                if(!(a[(j+i)%n]<b[j]))
                    {
                        return false;
                    }
            }
        return true ;
    }
void solve()
    {
        intt n,k1=0,k2=0;
        cin>>n;
        vi a(n+1),b(n+1),c(n+1);
        for(intt i=0;i<n;i++)
            {
                cin>>a[i];
            }
        for(intt i=0;i<n;i++)
            {
                cin>>b[i];
            }
        for(intt i=0;i<n;i++)
            {
                cin>>c[i];
            }
        for(intt i=0;i<n;i++)
            {
               if(fun(a,b,i,n))
                    {
                        k1++;
                    }
            }
        for(intt i=0;i<n;i++)
            {
                if(fun(b,c,i,n))
                    {
                        k2++;
                    }
            }
        cout<<k1*k2*n<<endl;
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