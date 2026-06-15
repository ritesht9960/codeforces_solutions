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
                for(intt i=n;i>=1;i--)
                    {
                        cout<<i<<" ";
                    }
                cout<<endl;
            }
        return 0;
    }