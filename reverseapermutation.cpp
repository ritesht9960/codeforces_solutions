#include<iostream>
#include<algorithm>
#include<iterator>
#define intt long long
using namespace std;
void check (intt p[],intt a[],intt n);
int main()
    {
        intt t,n,p[100],a[100],i;
        cin>>t;
        while(t--)
            {
                cin>>n;
                for(i=0;i<n;i++)
                    {
                        cin>>p[i];
                    }
                for(i=0;i<n;i++)
                    {
                        a[i]=p[i];
                    }
                sort(a,a+n);
                check(p,a,n);
                cout<<endl;
            }
        return 0;
    }
void check (intt p[],intt a[],intt n)
    {
        intt b[100],i,j,m,e;
        for(i=0;i<n;i++)
            {
                if(a[n-i-1]==p[i])
                    {
                        b[i]=p[i];
                        continue;
                    }
                else
                    {
                        e=i;
                        for(j=0;j<n;j++)
                            {
                                if(a[n-i-1]==p[j])
                                    {
                                        break;
                                    }
                            }
                        for(m=j;m>=i;m--)
                            {
                                b[e]=p[m];
                                e++;
                            }
                        for(m=j+1;m<n;m++)
                            {
                                b[m]=p[m];
                            }
                        break;
                    }
            }
                for(i=0;i<n;i++)
                    {
                        cout<<b[i]<<" ";
                    }    
           
    }