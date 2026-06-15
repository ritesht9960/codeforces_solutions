#include<iostream>
#include<algorithm>
#define intt long long
using namespace std;
int main()
    {
        intt t,n,out,a[200005];
        cin>>t;
        while(t--)
            {
                cin>>n;
                intt max_len=1,count=1;
                for(int i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                sort(a,a+n);
                n=unique(a,a+n)-a;
                for(int i=0;i<(n-1);i++)
                    {
                        if(a[i+1]==a[i]+1)
                            {
                                count++;
                            }
                        else
                            {
                               max_len=max(max_len,count);
                                count=1;
                            }        
                    }
                max_len=max(max_len,count);
                cout<<max_len<<endl;
            }
        return 0;
    }