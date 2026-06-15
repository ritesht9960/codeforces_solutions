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
                intt n,w;
                cin>>n>>w;
                intt removed= n-n/w;
                cout<<removed<<endl;
            }
        return 0;
    }