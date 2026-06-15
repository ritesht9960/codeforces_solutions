#include<iostream>
#include<algorithm>
#include<cmath>
#include<numeric>
#define intt long long
using namespace std;
void solve()
    {
        intt s,k,m;
        cin>>s>>k>>m;
        if(k==s)
            {
                cout<<k-(m%k)<<endl;
                return;
            }
        else if(s<k)
            {
                if((m%k)<s)
                    {
                        cout<<s-(m%k)<<endl;
                        return;
                    }
                else
                    {
                        cout<<"0"<<endl;
                        return;
                    }
            }
        else
            {
                if(((m-(m%k))/k)%2==0)
                    {
                        cout<<s-(m%k)<<endl;
                        return;
                    }
                else
                    {
                        cout<<k-(m%k)<<endl;
                        return;
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