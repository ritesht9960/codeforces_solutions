    #include<iostream>
    #include<algorithm>
    #include<cmath>
    #include<numeric>
    #define intt long long
    using namespace std;
    int main()
    {
        ios::sync_with_stdio(false);
        cin.tie(NULL);

        intt t;
        cin >> t;
        while(t--)
        {
            intt n,a[200000],b[200000],j;
            cin>>n;
            for(intt i=0;i<n;i++)
            {
                cin>>a[i];
            }
            for(intt i=0;i<n;i++)
            {
                b[i]=n-i;
            }
            for(intt i=0;i<n;i++)
            {
                if(a[i]!=b[i])
                    {
                        for(j=i+1;j<n;j++)
                            {
                                if(a[j]==b[i])
                                {
                                    break;
                                }
                            }
                        reverse(a+i,a+j+1);
                        break;
                    }
            }
            for(intt i=0;i<n;i++)
            {
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        return 0;
    }