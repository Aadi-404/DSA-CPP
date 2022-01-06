#include <bits/stdc++.h>
using namespace std; 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int currP,needP,matchRemain;
        cin>>currP>>needP>>matchRemain;
        int possToScore = matchRemain*2;
        if((needP-currP) <= (possToScore))cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}