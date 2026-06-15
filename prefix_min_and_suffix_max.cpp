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
void seedha(intt min_index, intt max_index, vi &a, vi &b)
{
    intt m=min_index,min=a[min_index],max=a[max_index];
    for(intt i=0;i<min_index;i++)
        {
            if(a[i]>min)
                {
                    min=a[i];
                    m=i;
                }
        } 
    for(intt i=0;i<m;i++)
        {
            b[i]=0;
        }
    for(intt i=m+1;i<min_index;i++)
        {
            b[i]=0;
        }
    b[m]=1;
    b[max_index]=1;
    b[min_index]=1;
    for(intt i=min_index+1;i<max_index;i++)
        {
            b[i]=0;
        }
    m=max_index;
    for(intt i=max_index+1;i<a.size();i++)
        {
            if(a[i]<max)
                {
                    m=i;
                    max=a[i];
                }
        }
    for(intt i=max_index+1;i<m;i++)
        {
            b[i]=0;
        }
    for(intt i=m;i<a.size();i++)
        {
            b[i]=0;
        }
    b[m]=1;
    
    return;
}
void ulta(intt min_index, intt max_index, vi &a, vi &b)
{
    intt m=max_index,min=a[max_index],max=a[min_index];
    for(intt i=0;i<=max_index;i++)
        {
            if(a[i]<min)
                {
                    min=a[i];
                    m=i;
                }
        } 
    for(intt i=0;i<m;i++)
        {
            b[i]=0;
        }
    for(intt i=m+1;i<max_index;i++)
        {
            b[i]=0;
        }
    b[m]=1;
    b[max_index]=1;
    b[min_index]=1;
    m=min_index;
    for(intt i=max_index+1;i<min_index;i++)
        {
            if(a[i]<min)
                {
                    min=a[i];
                    b[i]=1;
                }
            else
                {
                    b[i]=0;
                }
        }
    for(intt i=min_index+1;i<a.size();i++)
        {
            if(a[i]>max)
                {
                    m=i;
                    max=a[i];
                }
        }
    for(intt i=min_index+1;i<m;i++)
        {
            b[i]=0;
        }
    for(intt i=m;i<a.size();i++)
        {
            b[i]=0;
        }
    b[m]=1;
    return;
}
void solve()
    {
        intt n,x;
        cin>>n;
        vi a,b(n+1,0);
        for(intt i=0;i<n;i++)
            {
                cin>>x;
                a.pb(x);
            }
        intt max_index=0,min_index=0;
        for(intt i=0;i<n;i++)
            {
                if(a[i]>a[max_index])
                    {
                        max_index=i;
                    }
                if(a[i]<a[min_index])
                    {
                        min_index=i;
                    }
            }
        if(min_index<max_index)
            {
                seedha(min_index,max_index,a,b);
            }
        else
            {
                ulta(min_index,max_index,a,b);
            }
        for(intt i=0;i<n;i++)
            {
                cout<<b[i];
            }
        cout<<endl;
        return ;
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