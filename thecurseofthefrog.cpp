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
                intt n,x,a[1000000],b[1000000],c[1000000],total=0,count=0,flag=0,d[1000000];
                cin>>n>>x;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                        cin>>b[i];
                        cin>>c[i];
                    }
                for(intt i=0;i<n;i++)
                    {
                        d[i]=a[i]-c[i];
                    }
                sort(d,d+n);
                while(1)
                    {
                        for(intt i=0;i<n;i++)
                            {
                                if(b[i]>1)
                                    {
                                        for(intt j=0;j<b[i]-1;j++)
                                            {
                                                   total+=a[i];
                                                   if(x<=total)
                                                    {
                                                        flag=1;
                                                        cout<<count;
                                                        break;
                                                    }
                                            }
                                    }
                                else if(flag==1)
                                    {
                                        break;
                                    }
                            }
                          if(flag==1)
                            {
                                break;
                            }
                        for(intt i=0;i<n;i++)
                            {
                                if(x<=total)
                                    {
                                        flag=1;
                                        cout<<count;
                                        break;
                                    }
                                else
                                    {
                                        total+=d[n-i-1];
                                        count++;
                                    }
                            }
                        if(total>0 || x<0)
                            {
                                cout<<"-1";
                                break;
                            }
                        else if(total<0 || x>0)
                            {
                                cout<<"-1";
                                break;
                            }
                     }
            }
        return 0;
    }