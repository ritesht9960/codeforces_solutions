#include<iostream>
#include<algorithm>
using namespace std;
int main()
    {
        int t,a[100],n;
        cin>>t;
        while(t--)
        {
            cin>>n;
            for(int i=0;i<n;i++)
                cin>>a[i];
            sort(a,a+n);
            int flag0=0,flag1=0;
            for(int i=0;i<n;i++)
                {
                    if(a[i]==0)
                        flag0++;
                    if(a[i]==1)
                        flag1++;
                }
            if(flag0==0)
                {
                    cout<<"NO"<<endl;
                }
            else if(flag0==1)
                {
                    cout<<"YES"<<endl;
                }
            else if(flag0>1 && flag1>0)
                {
                    cout<<"YES"<<endl;
                }
            else
                {
                    cout<<"NO"<<endl;
                }


        }
    }