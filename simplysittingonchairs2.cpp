#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
using namespace std;
int main()
{
    intt t;
    cin >> t;
    while(t--)
    {
        intt n,a[200000];
        cin>>n;
        a[0]=0;
        for(intt i=1;i<=n;i++)
            {
                cin>>a[i];
            }
        intt lock=0,num=0,lock1;
        for(intt i=1;i<=n;i++)
            {
                if(i==lock)
                    {
                        break;
                    }
                intt flag=1;
                if(a[i]<=i)
                    {
                        lock=a[i];
                        num++;
                    }
                if(a[i]>i)
                    {
                        lock1=a[i];
                        for(intt j=lock1;j<=n||j<=lock;j++)
                            {
                                if(a[j]<=j)
                                    {
                                        flag=0;
                                        break;
                                    }
                            }
                        if(flag==1)
                            {
                                num++;
                                lock=lock1;
                            }
                    }
            }
        cout<<num<<endl;
    }
    return 0;
}