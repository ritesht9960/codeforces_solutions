#include<iostream>
#include<algorithm>
#define intt long long
using namespace std;
void solve()
    {
            intt n,m,h,a[200005],b[200005],c[2000005],d[200005],p,flag=0;
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
                for(intt i=m-1;i>=0;i--)
                    {
                        d[b[i]-1]=d[b[i]-1]+c[i];
                        if(d[b[i]-1]>h)
                            {
                                for(intt j=i;j<m;j++)
                                    {
                                        a[b[j]-1]=a[b[j]-1]+c[j];    
                                    }
                                for(intt j=0;j<n;j++)
                                    {
                                        cout<<a[j]<<" ";
                                    }
                                cout<<endl;
                                return;
                            }
                    }
                for(intt j=0;j<n;j++)
                    {
                        cout<<a[j]<<" ";
                    }
                cout<<endl;
                return ;
            }
    
int main()
    {
        intt t;
        cin>>t;
        while(t--)
            {
                solve();
            }
        return 0;
    }