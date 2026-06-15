#include<iostream>
#define intt long long
using namespace std;
int main()
    {
        intt t,a1,a2,k,b1,b2;
        cin>>t;
        while(t--)
            {
                cin>>k>>a1>>b1>>a2>>b2;
                intt flag1=0,flag2=0,dif;
                if(a1>b1)
                    {
                        flag1++;
                    }
                else
                    {
                        flag2++;
                    }
                if(a2>b2)
                    {
                        flag1++;
                    }
                else
                    {
                        flag2++;
                    }
                dif=(a1+a2)-(b1+b2);
                if(dif<k)
                    {
                        cout<<"YES"<<endl;
                    }
                else if(dif==k)
                    {
                        if(flag2>=flag1)
                            {
                                cout<<"YES"<<endl;
                            }
                        else
                            {
                                cout<<"NO"<<endl;
                            }
                    }
                else    {
                            cout<<"NO"<<endl;
                        }
                    }
        return 0;
    }