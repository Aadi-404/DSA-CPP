#include <bits/stdc++.h>
using namespace std; 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y;
        cin>>x>>y;
        if((x+y)& 1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}