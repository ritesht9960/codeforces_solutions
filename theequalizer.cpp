#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
using namespace std;
void check(intt a[],intt n,intt k,intt sum)
    {
       if(sum%2==1)
        {
            cout<<"YES\n";
            return ;
        }
        else if(sum%2==0 && (n*k)%2==0)
            {
                cout<<"YES\n";
                return ;
            }
        else
            {
                cout<<"NO\n";
                return ;
            }
    }
int main()
{
    intt t;
    cin >> t;
    while(t--)
    {
        intt n,k,sum=0,a[1000];
        cin>>n>>k;
        for(intt i=0;i<n;i++)
            {
                cin>>a[i];
                sum+=a[i];
            }   
        check(a,n,k,sum);   
    }
    return 0;
}