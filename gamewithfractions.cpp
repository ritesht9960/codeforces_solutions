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
                intt p,q,flag=0;
                cin>>p>>q;
                while(p>0 || q>1)
                    {
                        if(3*p==2*q)
                            {
                                flag=1;
                                break;
                            }
                        
                    }

            }
        return 0;
    }