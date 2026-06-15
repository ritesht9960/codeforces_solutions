#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
using namespace std;
intt maxi(intt a[],intt n,intt max,intt j);   
int main()
{
    intt t;
    cin>>t;
    while(t--)
    {
        intt n,a[2000005];
        cin>>n;
        for(intt i=0;i<n;i++)
        {
            cin>>a[i];
        }
        intt max=0,j=0;
        max=maxi(a,n,max,j);
        cout<<max<<endl;    
    }
    return 0;
}
intt maxi(intt a[],intt n,intt max,intt j)
    {
        intt max1=0;
        if(j==n)
            {
                return max;
            }
        else
            {
                for(intt i=n-1;i>=0;i--)
                    {
                        if(a[i]==1)
                            {
                                for(intt m=0;m<i;m++)
                                    {
                                        max1+=a[m];
                                    }
                                if(max1>max)
                                    {
                                        max=max1;
                                    }
                                for(intt i=0;i<n;i++)
                                    {
                                        if(a[i]>0)
                                            {
                                                a[i]-=1;
                                            }
                                    }
                                return maxi(a,n,max,j+1);
                            }
                    }
            }
         return maxi(a,n,max,j+1);
    }