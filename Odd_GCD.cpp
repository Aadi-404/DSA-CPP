#include <bits/stdc++.h>
using namespace std; 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        long long int a[n];
        for(int i =0;i<n;i++)cin>>a[i];
        int count =-1;
        bool flag =1;
        while(flag){
            count++;
            for(int i =0;i<n;i++){
                if(a[i]&1){
                    flag =0;
                    break;
                }
                else {
                    a[i] =  a[i] >> 1;
                    // cout<<a[i]<<" ";
                    }
                
            }
        }
        cout<<count<<endl;
    }
}