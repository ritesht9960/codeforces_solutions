#include<iostream>
#include<algorithm>
#define intt long long
using namespace std;
int change(intt a[],intt n,intt j);
int main()
    {
        intt t;
        cin>>t;
        while(t--)
            {
                intt n,a[300005],count=0,j;
                cin>>n;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                for(intt j=0;j<n-1;j++)
                    {
                        if(a[j+1]==7-a[j]||a[j+1]==a[j])
                            {
                                count+=change(a,n,j);
                            }
                    }
                cout<<count<<endl;
            }
        return 0;
    }
int change(intt a[],intt n,intt j)
    {
        while(1)
            {
                if(a[j+1]==7-a[j]||a[j+1]==a[j]||a[j+1]==7-a[j+2]||a[j+1]==a[j+2])
                    {
                      a[j+1]++;
                      if(a[j+1]>6)
                        {
                            a[j+1]=1;
                        }
                    }
                else
                    {
                        break;
                    }
            }
        return 1;
        }

    