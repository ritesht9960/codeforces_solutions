#include<iostream>
#include<algorithm>
#define intt long long
using namespace std;
int main()
    {
        intt t;
        cin>>t;
        while(t--)
            {
                intt n,m,x,y,a[2000000],b[2000000];
                cin>>n>>m>>x>>y;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                for(intt i=0;i<m;i++)
                    {
                        cin>>b[i];
                    }
                intt crossings = m+n;
                cout<<crossings<<endl;
            }
        return 0;
    }