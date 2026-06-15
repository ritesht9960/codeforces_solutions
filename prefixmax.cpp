#include<iostream>
#include<algorithm>
#define intt long long
using namespace std;
int main()
    {
        intt t,n,out,a[10001];
        cin>>t;
        while(t--)
            {
                cin>>n;
                for(int i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                sort(a,a+n);
                out=a[n-1]*n;
                cout<<out<<endl;
            }
        return 0;
    }