#include<iostream>
#include<algorithm>
#include<cmath>
#include<numeric>
#define intt long long
using namespace std;
intt lcm(intt x,intt y)
{
    return (x/__gcd(x,y))*y;
}
void solve()
    {
        intt n,k,a[200005],b[200005];
        cin>>n;
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
                for(intt j=0;j<n;j++)
                    {
                        if(a[i])
                    }
            }
    }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    intt t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}