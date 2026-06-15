#include<bits/stdc++.h> 
#define intt long long
#define v_ vector<intt>
#define vi(v,n) v_ v(n); for(auto &x : v) cin >> x;
#define sz(x) ((intt)(x).size())
#define ff first
#define pb push_back
#define p pair<intt,intt>
#define vip(v,n) vector<p> v(n); for(auto &x : v) cin >> x.ff >> x.ss;
#define l list 
#define ss second
#define st size_t
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define lb(v,x) lower_bound(all(v),x)
#define ub(v,x) upper_bound(all(v),x)
#define mx(v,l,r) *max_element(l,r)
#define mn(v,l,r) *min_element(l,r)
#define print(v) for(auto &x : v) cout << x << ' '; cout << '\n'
#define printn(v,n) for(intt i=0;i<n;i++) cout << v[i] << ' '; cout << '\n'
#define printp(v) for(auto &x : v) cout << x.ff << ' ' << x.ss << '\n'
using namespace std;
intt lcm(intt x,intt y)
{
    return (x/__gcd(x,y))*y;
}
void solve()
    {
        intt n,x,y,z;
        cin>>n>>x>>y>>z;
        int t1=n/(x+y);
        if(n%(x+y)!=0) t1++;
        int t2=(n-z*x)/(x+10*y);
        if((n-z*x)%(x+10*y)!=0) t2++;
        t2+=z;
        if(n<=z*x)
            {
                cout<<t1<<endl;
                return;
            }
        cout<<min(t1,t2)<<endl;
    }

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    intt T;
    cin>>T;
    for(size_t i=0;i<T;i++) solve(); 
    return 0;
}



