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
                intt n,a[200005],b[200005],flag=0,j=0;
                cin>>n;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];  
                    }   
                for(intt i=1;i<n;i++)
                    {
                        for(intt k=0;k<j;k++,flag=0)
                        {
                            if(i==a[i-1])
                                {
                                    for(intt r=0;r<j;k++)
                                        {
                                            if(i+1==b[k])
                                            {
                                                flag=1;
                                                break;
                                            }
                                            else if(i+1==a[i-1])
                                            {
                                                flag=1;
                                                break;
                                            }
                                        }
                                    if(flag==1)
                                        {
                                            j++;
                                            break;
                                        }
                                    else
                                        {
                                            flag=2;
                                            break;
                                        }  
                                }
                            if(i==b[k])
                            {
                                flag=1;
                                break;
                            }
                        }
                        if(flag==1)
                        {
                            break;
                        }
                        if(flag==2)
                        {
                            continue;
                        }
                        b[j]=a[i-1];    
                        j++;
                    }
                cout<<j<<endl;
            }
        return 0;
    }