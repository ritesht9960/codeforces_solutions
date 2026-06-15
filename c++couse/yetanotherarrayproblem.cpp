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
                intt n,a[200005],b[200005];
                cin>>n;
                for(intt i=0;i<n;i++)
                    {
                        cin>>a[i];
                    }
                int flag=1;
                for(intt i=0;i<n;i++)
                    {
                        if(a[i]%2==1)
                            {
                                cout<<"2"<<endl;
                                flag=0;
                                break;
                            }
                    }
                if(flag==1)
                    {
                        intt k=0;
                        for(intt j=0;j<n;j++)
                            {
                        for(intt i=3;i<a[j];i+=2)
                            {
                                if(a[j]%i!=0)
                                    {
                                        flag=0;
                                        b[k]=i;
                                        k++;
                                        break;
                                    }
                            }
                        }
                        int small=b[0];
                        for(intt i=0;i<k;i++)
                            {
                                if(b[i]<small)
                                    {
                                        small=b[i];
                                    }
                            }
                        cout<<small<<endl;
                    }
            }
        return 0;
    }
