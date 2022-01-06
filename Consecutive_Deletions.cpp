#include <bits/stdc++.h>
using namespace std; 

void solve(){
    long long int n , k;
    cin>>n>>k;
    vector<int> v(n+1,0);
    vector<long long int> sum(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>v[i];
        sum[i]= sum[i-1]+ v[i];
    }
    long long int mn = k;
    int pos =0;
    for(int i=0;i+k <=n;i++){
        mn = min(mn,sum[i+k]-sum[i]);
    }
    long long int ans = mn * (mn+1)/2 + sum[n]-mn;
    cout<<ans<<endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}