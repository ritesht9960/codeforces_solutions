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
            intt n,k;
            vi a;
            cin>>n>>k;
            for(intt i=0;i<n;i++)
            {
                intt x;
                cin>>x;
                a.pb(x);
            }
            sort(a.begin(),a.end());
            auto len=unique(a.begin(),a.end())-a.begin();
            for(intt j=0;j<k;j++)
                    {
                        if(a[j]!=j)
                            {
                                cout<<j<<endl;
                                return;
                            }
                    }
            cout<<k-1<<endl;
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