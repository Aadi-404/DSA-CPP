#include <bits/stdc++.h>
using namespace std; 
main()
{
    int a[]= {1,2,3,4};
    int n = 4;
    int k = 10;
    // int co =k;
    int dp[k+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i =1;i<=k;i++){
        for(int j =1;j<=n;j++){
                dp[i][j]= dp[i][j-1];
            if(a[j-1]<=i ){        //understand this ,actually we are finding <= k 
                    dp[i][j] += dp[i/a[j-1]][j-1] + 1;
            }

        }
    }
    cout<<dp[k][n]<<endl;
}