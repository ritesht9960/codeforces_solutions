#include<iostream>
#include<algorithm>
using namespace std;
int main()
    {
        int a[200005],b[200005],n,k,t,i;
        cin>>t;
        while(t--)
            {
                cin>>n>>k;
                int sum=0;
                int j=n-1;
                for(int i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                for(int i=0;i<k;i++)
                    {
                        cin>>b[i];
                    }
                sort(a,a+n);
                sort(b,b+k);
                for(i=0;i<k;i++)
                        {
                            while(b[i]--)
                                {
                                    sum+=a[j];
                                    j--;
                                    if(j==-1)
                                        {
                                            break;
                                        }
                                }
                            sum-=a[j+1];
                            if(j==-1)
                                {
                                    break;
                                }
                        }
                if(i==k)
                        {
                            j--;
                            while(j>=0)
                                {                                   
                                    sum+=a[j];
                                    j--;
                                }
                        }
                cout<<sum<<endl;                
            }
        return 0;
    }