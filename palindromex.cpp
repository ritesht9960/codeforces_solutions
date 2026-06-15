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
bool palindrome(v_ a,intt i,intt n,v_ &b,intt r)
    {   
        intt c[n/2];
        intt m=-1;
        for(st j=i+1;j<n;j++)
            {
                if(a[i]==a[j]) m=j;
              
            }
        if(m==-1) return false;
        for(st j=i+1;i<=m/2+m%2;j++)
            {
                if(a[j]!=a[m-j+i]) return false;
                c[j-i]=a[j];
            }
        sort(c,c+m/2+m%2);
        intt len=distance(unique(c,c+m/2+m%2),c);
        for(st j=0;j<len;j++)
            {
                if(c[j]!=j)
                    {
                        b[r]=j;
                        break;
                    }
            }
        return true;
    }
void solve()
    {
        intt n,r=0;
        cin>>n;
        vi(a,2*n);
        v_ b(n/2+1);
        for(st i=0;i<n;i++)
            {
                if(palindrome(a,i,2*n,b,r)) r++;
            }
        sort(all(b));
        cout<<b[r-1]<<endl;
        return ;
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



