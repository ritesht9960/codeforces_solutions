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
                intt n,a[200005];
                cin>>n;
                for(intt i=0;i<n;i++)
                {
                    cin>>a[i];
                }
                intt count=0;
                for(intt i=0;i<n;i++)
                    {
                        for(intt j=0;j<i;j++)
                            {
                                if(a[i]<a[j])
                                    {
                                        count++;
                                        break;
                                    }
                            }    
                    }
                cout<<count<<endl;
            }
        return 0;
    }