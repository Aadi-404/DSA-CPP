#include<bits/stdc++.h>
using namespace std;
main(){
    int t ;
    cin>>t;
    while(t--){
        int n ;
        cin>>n;
        long long int ans =0;
        for(int i =0;i<n;i++){
            int a , b;
            cin>>a>>b;
            ans += (a-b);
        }
        cout<<ans<<endl;
    }
}