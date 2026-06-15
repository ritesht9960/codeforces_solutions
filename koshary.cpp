#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long

using namespace std;

int main()
{
    intt t;
    cin>>t;

    while(t--)
    {
        intt x,y;
        cin>>x>>y;
        if((x%2)+(y%2)==2)
            {
                cout<<"NO"<<endl;
            }
        else
            {
                cout<<"YES"<<endl;
            }
    }

    return 0;
}