#include<iostream>
#include<algorithm>
#define intt long long
using namespace std;
int main()
 {
  intt t,n,j,k,a[200005],i;
  cin>>t;
  while(t--)
   {
    cin>>n>>j>>k;
    for(i=0;i<n;i++)
     {
      cin>>a[i];
     }
    long long int flag=a[j-1];
    if(k>=2)
     {
      cout<<"YES"<<endl;
      continue;
     }
    else
     {
      sort(a,a+n);
     }
    if(a[n-1]==flag)
     {
      cout<<"YES"<<endl;
     }
    else
     {
      cout<<"NO"<<endl;
     }
   }
  return 0;
 }