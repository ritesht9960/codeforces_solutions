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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    intt t;
    cin >> t;
    while(t--)
    {
        intt a,b,c,m,ab,bc,ac,abc,ao,bo,co;
        cin>>a>>b>>c>>m;
        ab=lcm(a,b);
        ac=lcm(a,c);
        bc=lcm(b,c);
        abc=lcm(ab,c);
        ao=m/a*6-(m/ab*3+m/ac*3-m/abc*2);
        bo=m/b*6-(m/ab*3+m/bc*3-m/abc*2);   
        co=m/c*6-(m/ac*3+m/bc*3-m/abc*2);
        cout<<ao<<" "<<bo<<" "<<co<<"\n";
    }
    return 0;
}