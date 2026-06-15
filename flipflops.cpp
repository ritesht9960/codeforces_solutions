#include<iostream>
#include<algorithm>
#define intt long long
using namespace std;
int main()
    {
        intt t,n,c,k,a[200005];
        cin>>t;
        while(t--)
            {
                cin>>n>>c>>k;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                sort(a,a+n);
                intt i=0;
                while(a[i]<=c && i<n)
                    {
                       while(k>0)
                        {
                            if(a[i]<c)
                                {
                                    intt need = c - a[i];
                                    intt use = min(k, need);
                                    a[i] += use;
                                    k -= use;
                                }
                            else    
                                {
                                    break;
                                }
                        }
                        c=c+a[i];
                        i++;
                    }
                cout<<c<<endl;
            }
        return 0;
    }