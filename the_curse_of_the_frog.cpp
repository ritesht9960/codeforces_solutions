#include<bits/stdc++.h>
#define intt long long
using namespace std;

void solve()
{
    intt n,x;
    cin>>n>>x;

    intt freeGain = 0;
    intt mx = 0;

    for(intt i=0;i<n;i++)
    {
        intt a,b,c;
        cin>>a>>b>>c;

        freeGain += (b-1)*a;

        mx = max(mx, a*b - c);
    }

    if(freeGain >= x)
    {
        cout<<0<<"\n";
        return;
    }

    if(mx <= 0)
    {
        cout<<-1<<"\n";
        return;
    }

    intt need = x - freeGain;

    cout<<(need + mx - 1)/mx<<"\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    intt T;
    cin>>T;

    while(T--)
    {
        solve();
    }
}