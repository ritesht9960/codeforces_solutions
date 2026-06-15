#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
using namespace std;
int main()
{
    intt t;
    cin>>t;
    while(t--)
    {
        intt n,a[2000005],b[20000005];
        cin>>n;
        for(intt i=0;i<n;i++)
        {
            cin>>a[i];
        }
        intt j=0;
        for(intt i=0;i<n;i++)
            {
                if(a[i]%6==0)
                    {
                        b[j]=a[i];
                        j++;
                    }
            }
        for(intt i=0;i<n;i++)
            {
                if(a[i]%3!=0 && a[i]%2==0)
                    {
                        b[j]=a[i];
                        j++;
                    }
            }
        for(intt i=0;i<n;i++)
            {
                if(a[i]%3!=0 && a[i]%2!=0)
                    {
                        b[j]=a[i];
                        j++;
                    }
            }
        for(intt i=0;i<n;i++)
            {
                if(a[i]%3==0 && a[i]%2!=0)
                    {
                        b[j]=a[i];
                        j++;
                    }
            }
        for(intt i=0;i<j;i++)
            {
                cout<<b[i]<<" ";
            }
        cout<<endl;
    }
    return 0;
}