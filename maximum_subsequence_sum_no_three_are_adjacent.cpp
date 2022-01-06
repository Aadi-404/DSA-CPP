#include <bits/stdc++.h>
using namespace std;

int solve(int a[],int i,int dp[]){
    if(i<0)return 0;
    else if(i==0)return a[0];
    else if(i==1)return a[0] + a[1];
    
    if(dp[i]!= -1)return dp[i];

    return dp[i]= max(solve(a,i-1,dp),max(a[i]+ a[i-1] +solve(a,i-3,dp),a[i]+ solve(a,i-2,dp) ));
}
main()
{
    int n = 8;
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int dp[n];
    memset(dp,-1,sizeof(dp));
    cout<<solve(a,n-1,dp);
}