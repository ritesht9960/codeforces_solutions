#include<iostream>
using namespace std;
int main()
    {
        long long int a[1000],n,t,i,j;
        cin>>t;
        while(t--)
            {
                cin>>n;
                for(i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                int flag=0;
                for(i=0;i<n;i++)
                    {
                        for(j=i+1;j<n;j++)
                            {
                                if((a[j]%a[i])%2==0)
                                    {
                                        flag=1;
                                        break;
                                    }
                            }
                        if(flag==1)
                            {
                                break;
                            }
                    }
                if(flag==1)
                    {
                        cout<<a[i]<<" "<<a[j]<<endl;
                    }
                else
                    {
                            cout<<"-1"<<endl;
                    }
            }
        return 0;
    }
