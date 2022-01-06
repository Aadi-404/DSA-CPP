#include <bits/stdc++.h>
using namespace std; 
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long int n ;
        cin>>n;
        // long long int i =1,j=2;
        // long long int maxLen = 1;
        // long long int curr = 1;
        // while(j<=n){
        //     if((curr & j) >0){
        //         curr = curr & j;
        //         maxLen = max(maxLen,j-i);
        //         j++;
        //     }
        //     else{
        //         i=j-1;
        //         curr= j;
        //         j++;
        //     }
        // }
        long long int maxLen = 1;
        long long int curr = 1;
        while((2 * curr) < n){
            curr = curr * 2;
        // cout<<curr<<" ";
        }
        if((2*curr) == n){
            curr = curr * 2;
        }
        // cout<<curr<<endl;
        maxLen = max(n-curr +1,(curr - curr/2));
        cout<<maxLen<<endl;
    }
}