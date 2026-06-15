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
            intt n,j,k,p=0,a[5],b[5],count=0;
            cin>>n>>j>>k;
            while(n!=0)
                {
                    a[p]=n%10;
                    n/=10;
                    p++;
                }
            for(intt i=1;i<=max(j,k);i++)
                {
                    next_permutation(a,a+p);
                    if(i==min(j,k))
                        {
                            for(intt i=0;i<p;i++)
                                {
                                    b[i]=a[i];
                                }
                        }
                }
            for(intt i=0;i<p;i++)
                {
                    if(a[i]==b[i])
                        {
                            count++;
                        }
                }
            cout<<count<<"A"<<p-count<<"B"<<endl;
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