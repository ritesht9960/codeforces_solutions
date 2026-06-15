#include<bits/stdc++.h> 
#define intt long long
#define vi vector<intt>
#define vc vector<char>
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
        intt n,k,c0=0,c1=0,c2=0;
        string s;
        cin>>n>>k;
        cin>>s;
        vc a(n+1,'+');
        auto ptr1=a.begin()+1,ptr2=a.end()-1;
        for(size_t i=0;i<s.size();i++)
            {
                if(s[i]=='0')
                    {
                        c0++;
                    }
                else if(s[i]=='1')
                    {
                        c1++;
                    }
                else    
                    {
                        c2++;
                    }
            }
        intt t=n-(c0+c1+c2)-2*k;
        for(intt i=1;i<=c0;i++)
            {
                a[i]='-';
            }
        for(intt i=n;i>n-c1;i--)
            {
                a[i]='-';
            }
        ptr1+=c0;
        ptr2-=c1;
        while(ptr1<=ptr2)
            {
                if(c2<=0)
                    {
                        break;
                    }
                *ptr1='?';
                *ptr2='?';
                ptr1++;
                ptr2--;
            }
        if(ptr1>=ptr2 && c2>0)
            {
                *ptr1='-';
                *ptr2='-';
                ptr1++;
                ptr2--;
            }
        for(intt i=1;i<=n;i++)
            {
                cout<<a[i];
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