#include<iostream>
#include<algorithm>
#include<cmath>
#include<numeric>
#define intt long long
using namespace std;
 void solve()
    {
        intt n,a[200005];
        cin>>n;
        for(intt i=0;i<n;i++)
        {
            cin>>a[i];
        }
        intt maxi=a[0],mini,count=0;
        for(intt i=1;i<n;i++)
            {
                if(a[i]>maxi)
                    {
                        maxi=a[i];
                    }
                if(i%2==1 && a[i]<maxi)
                    {
                        a[i]=maxi;
                    }
            }
        if(n==2)
            {
                if(a[0]>=a[1])
                    {
                        count+=a[0]-a[1]+1;
                        cout<<count<<endl;
                        return ;
                    }
                else
                    {
                        cout<<"0"<<endl;
                        return ;
                    }
            }
         for(intt i=0;i<n-2;i+=2)
            {
                mini=max(a[i],a[i+2]);
                if(a[i+1]<=mini)
                    {
                        if(a[i]>=a[i+1])
                            {
                                count+=a[i]-a[i+1]+1;
                                a[i]=a[i]-count;
                            }
                            if(a[i+2]>=a[i+1])
                            {
                                count+=a[i+2]-a[i+1]+1;
                                a[i+2]=a[i+2]-count;
                            }
                    }
            }
        cout<<count<<endl;
        return;
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