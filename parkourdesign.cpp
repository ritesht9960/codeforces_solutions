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
                intt x,y,sum=0,flag=0;
                cin>>x>>y;
                for(intt i=0;i<=y;i++)
                    {
                            for(intt j=0;sum<=x;j++)
                                {
                                    sum=j*3+i*2+(i-y)*4;
                                    if(sum==x)
                                        {
                                            flag=1;
                                            break;
                                        }
                                    else
                                        {
                                            sum=0;
                                        }
                                }
                            if(flag==1)
                                {
                                    break;
                                }
                    }
                if(flag==1)
                    {
                        cout<<"YES"<<endl;
                    }
                else
                    {
                        cout<<"NO"<<endl;
                    }
            }
        return 0;
    }