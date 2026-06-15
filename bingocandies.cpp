    #include<iostream>
    #include<algorithm>
    #define intt long long
    using namespace std;
    int main()
        {
            intt t,n,a[10001];
            cin>>t;
            while(t--)
                {
                    cin>>n;
                    intt sq=n*n;
                    for(int i=0;i<sq;i++)
                        {
                            cin>>a[i];
                        }
                    sort(a,a+sq);
                    intt count=1;
                    intt m=0;
                    for(int i=0;i<sq-1;i++)
                        {
                            if(a[i]==a[i+1])
                                {
                                    count++;
                                }
                            else
                                {
                                    m=max(count,m);
                                    count=1;
                                }
                        }
                    if(m<=(n-1)*(n-1))
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