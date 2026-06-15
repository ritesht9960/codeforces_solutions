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
                intt n,x,y,a[200005],b[200005];
                cin>>n>>x>>y;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];  
                    }
                while(1)
                    {
                        intt small=0,small2=0,g=1;
                        for(intt i=0;i<n;i++)
                            {
                                b[i]=a[i]%x;
                                if(a[i]<x)
                                {
                                    b[i]=x+1;
                                }
                                if(b[small]>b[i])
                                    {
                                        small=i;
                                    }
                            }
                        for(intt i=0;i<n;i++)
                            {
                                if(i==small)
                                    {
                                        b[i]=x+1;
                                        continue;
                                    }
                                while(g--)
                                    {
                                        small2=i;
                                    }
                                b[i]=((a[small]/x)*y+a[i])%x;
                                if(b[i]<b[small2])
                                    {
                                        small2=i;
                                    }   
                            }
                            a[small2]+=a[small]/x*y;
                            a[small]=0;
                            int flag=0;
                            for(intt i=0;i<n;i++)
                                {
                                    if(a[i]<x)
                                        {
                                            flag++;
                                        }
                                }
                            if(flag==1)
                                {
                                    cout<<a[small2]<<endl;
                                    break;
                                }
                    }
            }
        return 0;
    }
