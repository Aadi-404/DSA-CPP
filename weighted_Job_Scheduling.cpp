#include<bits/stdc++.h>
using namespace std;
class Job {
    public : 
    int start;
    int end ;
    int value;
    Job(int a, int b, int c){
        start = a;
        end = b;
        value = c;
    }
};
int dp[100001];
int findMaxProfit(Job a[],int n,int time_till){
    if(n<=0)return 0;
    int pick;
    if(time_till >= a[n-1].start) {
        dp[n] = max(a[n-1].value + findMaxProfit(a,n-1,a[n-1].start),findMaxProfit(a,n-1,time_till));
    }
    else dp[n] = findMaxProfit(a,n-1,time_till);
    return dp[n];
}

main(){
    Job arr[] = {{3, 10, 20}, {1, 2, 50}, {6, 19, 100}, {2, 100, 200}};
    int n = sizeof(arr)/sizeof(arr[0]);
    memset(dp,0,sizeof(dp));
    cout << "The optimal profit is " << findMaxProfit(arr, n,INT_MAX);
}