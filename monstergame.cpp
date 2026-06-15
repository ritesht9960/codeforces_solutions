#include<iostream>
#include<algorithm>
#include<cmath>
#include<numeric>
#define intt long long
using namespace std;
intt lcm(intt x,intt y)
{
    return (x/__gcd(x,y))*y;
}
int binarySearch(intt arr[], intt item, intt low, intt high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (item == arr[mid])
            return mid + 1;
        if (item > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}

void solve()
    {
        intt n,a[200005],b[200005],maxx=0,c[200005],i,m;
        cin>>n;
        for(intt i=0;i<n;i++)
            {
                cin>>a[i];
            }   
        for(intt i=0;i<n;i++)
            {
                cin>>b[i];
            }
        sort(a,a+n);
        for(i=0;i<n;i++)
            {
                maxx+=b[i];
                c[i]=maxx;
                if(c[i]>=n)
                    {
                        break;
                    }
            }
        maxx=0;
        for(intt j=0;j<n;j++)
            {
                if((j>0) && (a[j-1]==a[j]))
                    {
                        continue;
                    }
                m=binarySearch(c,n-j,0,i);
                if(maxx<a[j]*(m))
                                    {
                                        maxx=a[j]*(m);
                                    }
            }
        cout<<maxx<<endl;
    }
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    intt t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}