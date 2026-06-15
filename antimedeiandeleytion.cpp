#include<iostream>
#include<algorithm>
#include<cmath>
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
        intt n,p[101];
        cin>>n;
        for(intt i=0;i<n;i++)
            {
                cin>>p[i];
            }
        if(n==1)
            {
                cout<<"1\n";
            }
        else 
            {
                for(intt i=0;i<n;i++)
                    {
                        cout<<"2"<<" ";
                    }
                cout<<"\n";
            }
    }
    return 0;
}