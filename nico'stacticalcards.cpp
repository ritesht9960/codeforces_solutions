#include<iostream>
#include<algorithm>
#include<cmath>
#include<numeric>
#define intt long long
using namespace std;
void solve()
    {
        intt n,k=0,a[100005],b[100005];
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
                k=max(k-a[i],b[i]-k);
            }
        cout<<k<<endl;
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