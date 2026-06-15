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
                intt n,a[20005],flag=0;
                cin>>n;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                while(1)
                    {
                        int temp=a[0]%2;
                        for(intt i=0;i<n;i+=2)
                            {
                                if(a[i]%2==temp)
                                    {
                                        flag++;
                                    }
                            }
                        break;
                    }
                    if(n%2!=0)
                        {
                            n++;
                        }
                if(flag==n/2)
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