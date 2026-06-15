#include<iostream>
#include<algorithm>
#include<cmath>
#include<numeric>
#define intt long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    intt t;
    cin >> t;
    while(t--)
    {
        intt n,a[200000],flag=0,j=2;
        cin>>n;
        for(intt i=0;i<n;i++)
        {
            cin>>a[i];
        }
        intt m=a[0];
        for(intt i=1;i<n;i++)
            {
                m=gcd(m,a[i]);
            }
        while(1)
            {
                if(gcd(m,j)==1 || j==1000000000)
                    {
                        flag=1;
                        break;
                    }
                j++;
            }
        if(flag==1)
        {
            cout<<j<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
    return 0;
}