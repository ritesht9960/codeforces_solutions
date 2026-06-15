#include<iostream>
#include<algorithm>
using namespace std;
int main() 
    {
        long long int t,n,a[100000];
        cin>>t;
        while(t--)
            {
                cin>>n;
                int flag=0;
                for(int i=0;i<n;i++)
                    {
                     cin>>a[i];
                    }
                sort(a,a+n);
                for(int i=0;i<n-1;i++)
                    {
                        if(a[i]==a[i+1])
                            {
                                cout<<"YES"<<endl;
                                flag++;
                                break;
                            }
                    }
                if(flag==0)
                    {
                        cout<<"NO"<<endl;
                    }
                else if(a[n-1]==a[n-2])
                    {
                        cout<<"YES"<<endl;
                    }
            }
        return 0;
    }
