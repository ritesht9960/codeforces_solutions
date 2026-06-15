#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
void fun(intt a[],intt l,intt r);
using namespace std;
int main()
{
        intt t;
        cin>>t;
        while(t--)
            {
                intt n,q,a[10000],b[20000],temp=0,l,r,c[200005],d[200005];
                cin>>n>>q;
                for(intt i=0;i<n;i++)
                {
                        cin>>a[i];
                    }
                    for(intt i=0;i<n;i++)
                    {
                        cin>>b[i];
                    }
                    for(intt i=0;i<=q-1;i++)
                    {
                        cin>>c[i];
                        cin>>d[i];
                    }
                      for(intt i=n-1;i>=0;i--)
                    {
                        temp=max(temp,b[i]);
                        a[i]=max(temp,a[i]);
                        temp=max(a[i],temp);
                    }
                    for(intt i=0;i<=q-1;i++)
                    {
                        fun(a,c[i],d[i]);
                    }
                cout<<endl;
                }
        return 0;
}
void fun(intt a[],intt l,intt r)
    {
           intt sum=0;
                for(intt i=l-1;i<=r-1;i++)
                    {
                        sum+=a[i];
                    }
                cout<<sum<<" ";
    }