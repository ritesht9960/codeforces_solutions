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
                intt n,a[200005];
                cin>>n;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                if(a[0]==-1&&a[n-1]==-1)
                    {
                        a[0]=0;
                        a[n-1]=0;
                         for(intt i=0;i<n;i++)
                        {
                            if(a[i]==-1)
                                {
                                    a[i]=0;
                                }   
                        }
                        cout<<"0"<<endl;
                        for(intt i=0;i<n;i++)
                            {
                                cout<<a[i]<<" ";
                            }
                        cout<<endl;
                    }
                else if(a[0]==-1&&a[n-1]!=-1)
                {
                    a[0]=a[n-1];
                      for(intt i=0;i<n;i++)
                        {
                            if(a[i]==-1)
                                {
                                    a[i]=0;
                                }   
                        }
                    cout<<"0"<<endl;
                    for(intt i=0;i<n;i++)
                    {
                        cout<<a[i]<<" ";
                    }
                    cout<<endl;
                }
                else if(a[n-1]==-1&&a[0]!=-1)
                {
                    a[n-1]=a[0];
                    for(intt i=0;i<n;i++)
                        {
                            if(a[i]==-1)
                                {
                                    a[i]=0;
                                }   
                        }
                    cout<<"0"<<endl;
                    for(intt i=0;i<n;i++)
                        {
                         cout<<a[i]<<" ";
                        }
                    cout<<endl;
                }
                else    
                    {
                          for(intt i=0;i<n;i++)
                        {
                            if(a[i]==-1)
                                {
                                    a[i]=0;
                                }   
                        }
                        int temp=a[n-1]-a[0];
                        if(temp<0)
                            {
                                temp=-temp;
                            }
                        cout<<temp<<endl;
                          for(intt i=0;i<n;i++)
                        {
                         cout<<a[i]<<" ";
                        }
                        cout<<endl; 
                    }
            }
        return 0;
    }