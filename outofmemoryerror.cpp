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
                intt n,m,h,a[200005],b[200005],c[2000005],d[200005];
                cin>>n>>m>>h;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                for(intt i=0;i<m;i++)
                    {
                        cin>>b[i];
                        cin>>c[i];
                    }
                for(intt i=0;i<n;i++)
                    {
                        d[i]=a[i];
                    }
                for(intt i=0;i<m;i++)
                    {
                        d[b[i]-1]=d[b[i]-1]+c[i];
                        if(d[b[i]-1]>h)
                            {
                               copy(a,a+n,d);
                            }
                    }
                for(intt j=0;j<n;j++)
                    {
                        cout<<d[j]<<" ";
                    }
                cout<<endl;
            }
        return 0;
    }
    