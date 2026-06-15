#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
using namespace std;
intt fun(intt k1,intt i,intt c[],intt k)
    {
        intt m=0,total=0;
        for(m=0;m<1000;m++)
            {
                if(c[m]==0)
                    {
                        break;
                    }
            }
        for(intt j=0;j<k+1-k1;j++)
            {
                c[m++]=i+1;
                total++;
            }
        return total;
    }
int main()
{
    intt t;
    cin>>t;
    while(t--)
    {
        intt n,k,a[100],b[100],temp,k1,total=0,c[1000];
        intt * ptr;
        cin>>n>>k;
        for(intt i=0;i<k;i++)
            {
                cin>>a[i];
            }
        for(intt i=0;i<n;i++)
            {
                cin>>b[i];
            }
        for(intt i=0;i<1000;i++)
            {
                c[i]=0;
            }
        temp=n+1;
        k1=k;
        while(temp--)
            {
                for(intt i=0;i<n;i++)
                    {
                        if(b[i]==k1)
                                {
                                    total+=fun(k1,i,c,k);
                                    continue;
                                }
                    }
                k1--;
            }
        cout<<total<<endl;
        for(intt i=0;i<total;i++)
            {
                cout<<c[i]<<" ";
            }
        cout<<endl;
    }
    return 0;
}