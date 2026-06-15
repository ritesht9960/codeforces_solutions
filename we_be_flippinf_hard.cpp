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
        intt n,a[200005],b[200005],p=0;
        cin>>n;
        for(intt i=0;i<n;i++)
            {
                cin>>a[i];
            }   
        for(intt i=0;i<n;i++)
            {
                if(a[i]>0 && i!=n-1 && a[i+1]<0)
                    {
                        int sum=0;
                        for(intt j=i;j<n;j++)
                            {
                                if(a[j]>0)
                                    {
                                        for(intt m=i;m<j;m++)
                                            {
                                                sum+=abs(a[m]);
                                            }
                                        if(sum>a[j])
                                            {
                                                b[p++]=j;
                                                b[p++]=j-1;
                                                if(i==0)
                                                    {
                                                        b[p++]=0;
                                                    }
                                            }
                                    }
                            }
                    }
                else if(a[i]>a[i+1] && a[i+1]>0 && b[p-1]==a[i])
                    {
                        b[p++]=i+1;
                    }
            }
        cout<<p<<endl;
        for(intt i=0;i<p;i++)
            {
                cout<<b[i]+1<<" ";
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