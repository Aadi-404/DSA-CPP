#include <bits/stdc++.h>
using namespace std; 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, s;
        cin>>n>>k>>s;
        s= s- (n*n);
        cout<<(s/(k-1))<<endl;

    }
}