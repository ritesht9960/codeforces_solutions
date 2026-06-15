#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
using namespace std;
void fun(intt a[],intt b[],intt n,intt q,intt i,string r)
    {
        if(i==q)
            {
                return;
            }
        else
            {
                intt t=0,j=0;
                while(a[i]!=0)
                    {
                        if(j==n)
                            {
                                j=0;
                            }
                         else if(r[j]=='A')
                            {
                                t++;
                                a[i]--;
                                j++;
                            }   
                        else if(r[j]=='B')
                            {
                                t++;
                                j++;
                                a[i]/=2;
                            }
                    }
                b[i]=t;
                fun(a,b,n,q,i+1,r);
            }
        }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    intt t;
    cin >> t;
    while(t--)
    {
        intt n,q;
        intt a[100003],b[100003];
        string r;
        cin>>n>>q;
        cin>>r;
        for(intt i=0;i<q;i++)
            {
                cin>>a[i];
            }
        intt i=0;
        fun(a,b,n,q,i,r);
        for(intt j=0;j<q;j++)
            {
                cout<<b[j]<<"\n";
            } 
    }
    return 0;
}