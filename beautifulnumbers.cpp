#include<iostream>
#include<algorithm>
#include<cmath>
#define intt long long
using namespace std;
intt fun(intt a[],int i,intt max,intt output)
    {
        intt min=0,p=0;
        if(max<=9)
        {
            return output;
        }
        else
        {
            for(intt j=0;j<i;j++)
                {
                    if(a[j]>min)
                    {
                        min=a[j];
                        p=j;
                    }
                }
            if(p==i-1)
                {
                    max=max-a[p]+1;
                    a[p]=1;
                    output++;
                }
            else
                {
                    max=max-a[p];
                    a[p]=0;
                    output++;
                }
        }
        
        return fun(a,i,max,output);        
    }
int main()
{
    intt t;
    cin>>t;
    while(t--)
    {
        intt x,sum=0,count=0,a[20],num=0,i=0;
        cin>>x;
        num=x;
        while(num>0)
        {
            a[i]=num%10;
            num=num/10;
            i++;
        }
        intt max=0,output=0;
        for(intt j=0;j<i;j++)
            {
                max+=a[j];
            }
        output=fun(a,i,max,output);
        cout<<output<<endl;
    }
    return 0;
}

