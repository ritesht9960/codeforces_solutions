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
                intt n;
                cin>>n;
                int a[n];
                for(intt i=n-1,j=n;i>=0;i-=2,j--)
                    {
                        a[i]=j;
                    }
                if(n%2==0)
                    {
                        for(intt i=0,j=n/2;i<n;i+=2,j--)
                            {
                                a[i]=j;
                            }
                    }
                else
                    {
                        for(intt i=1,j=n/2;i<n;i+=2,j--)
                            {
                                a[i]=j;
                            }
                    }    
                for(intt i=0;i<n;i++)
                    {
                        cout<<a[i]<<" ";
                    }
                cout<<endl;
            }
        return 0;
    }