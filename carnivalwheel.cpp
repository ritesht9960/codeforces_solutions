#include<iostream>
#define intt long long
using namespace std;
int main()
    {
        intt t,l,a,b,give,max;
        cin>>t;
        while(t--)
            {
                cin>>l>>a>>b;
                give=a;
                max=a;
                while(1)
                    {
                        give+=b;
                        if(give>(l-1))
                            {
                                while(give>=(l-1))
                                    {
                                        give=give-l;
                                    }
                            }
                        if(max<give)
                            {
                                max=give;
                            }
                        if(give==a)
                            {
                                break;
                            }
                    }
                cout<<max<<endl;
            }
        return 0;
    }