#include <bits/stdc++.h>
using namespace std; 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i =0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        int j =n-1;
        long long int sum =0;
        while(a[j]>0 && j>=0){
            sum += a[j--];
        }
        j =0;
        while(k--){
            if(a[j]>=0)break;
            sum += abs(a[j++]);
        }
        cout<<sum<<endl;
    }
}