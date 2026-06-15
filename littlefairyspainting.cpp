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
                intt n,a[200005];
                cin>>n;
                for (intt i = 0; i <n; i++)
                {
                    cin>>a[i];
                }
            intt temp;
            temp=pow( 10,18.0);
            temp=temp%n;
            cout<<a[temp-1]<<endl;                
            }
        return 0;
    }