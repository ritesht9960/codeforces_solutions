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
                intt a[2],b[2],temp,count=0;
cin>>temp;
for(int i=0;i<2;i++)
{
cin>>a[i];
cin>>b[i];
}
if(a[1]<b[1])
{
while(temp>=a[0])
{
count++;
temp-=a[1];
}
while(temp>=b[0])
{
count++;
temp-=b[1];
}
}
else
{
while(temp>=b[0])
{
count++;
temp-=b[1];
}
while(temp>=a[0])
{
count++;
temp-=a[1];
}
}
cout<<count<<endl;

            }
        return 0;
    }