#include<iostream>
using namespace std;
#define intt long long
int main()
    {
        intt t,n,a[200005],b[200005];
        cin>>t;
        while(t--)
            {
                cin>>n;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                for(intt i=0;i<n;i++)
                    {
                        cin>>b[i];
                    }
                intt flag=0;
                for(intt j=0,m=0;j<n;j)
                    {
                        if(a[m]==b[j])
                           {
                                flag++;
                                j++;
                                continue;
                           }
                         m++;
                         if(m==n)
                           {
                            break;
                           }
                    }
                if(flag==n)
                    {
                        cout<<"YES"<<endl;
                    }
                else
                    {
                        cout<<"NO"<<endl;
                    }
            }
        return 0;
    }