#include<iostream>
#include<algorithm>
using namespace std;
int main()
    {
        int t,n,a[200005],b[200005],k,k1;
        cin>>t;
        while(t--)
            {
                cin>>n>>k;
                k1=k;
                int op1=0;
                for(int i=0;i<n;i++)
                    {
                        cin>>a[i];
                        if(a[i]==k)
                            {
                                op1++;
                            }  
                    }
                sort(a,a+n);
                for(int i=0;i<n;i++)
                    {
                        if(a[i]==a[i+1])
                            {
                                for(int j=i;j<n;j++)
                                    {
                                        a[j]=a[j+1];
                                        n--;
                                        k1--;
                                    }
                            }     
                    }
                int r;
                for(r=0;r<n;r++,k1++)
                    {
                        if(a[r]==k1)
                            {
                                break;
                            }
                    }
                int op=0;
                for(int i=0;i<r;i++)
                    {
                        if(a[i]!=i)
                            {
                                op+=a[1]-i;
                                i=a[i];
                            }                      
                    }
                if(op>=op1)
                    {
                        cout<<op<<endl;
                    }
                else
                    {
                        cout<<op1<<endl;

                }       
                    }
                    
            
                
            
        return 0;
        }
