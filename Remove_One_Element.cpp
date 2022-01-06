// codechef starter 10
#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        set<int> s;
        int b[n - 1];
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a[i] = x;
            s.insert(x);
        }
        for (int i = 0; i < n - 1; i++)
        {
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n - 1);
        long long int ans = b[0] - a[1];
        for (int i = 0; i < n - 1; i++)
        {
            if (s.find(b[i] - ans) == s.end())
            {
                ans = b[0] - a[0];
                break;
            }
        }
        if(ans<= 0)ans = b[0]-a[0];
        cout<<ans<<endl;

        // long long int aSum =0,bSum =0;
        // for(int i=0;i<n;i++){           //aSum and input
        //     long long int x;
        //     cin>>x;
        //     aSum += x;
        //     a[i]= x;
        // }
        // for(int i=0;i<n-1;i++){         // bSum and input
        //     long long int x;
        //     cin>>x;
        //     bSum += x;
        //     b[i]= x;
        // }
        // long long int ans = INT_MAX;
        // long long int temp = bSum - aSum ;
        // for(int i =0;i<n;i++){
        //     if((temp+a[i])%(n-1) ==0){
        //         if((temp + a[i])/(n-1) <= 0)continue;        // ignore the negative ans
        //         ans= min((temp+a[i])/(n-1),ans);            // smallest ans
        //     }
        // }
        // sort(a,a+n);
        // for(int i =0;i<n ;i++){
        //     if((temp + a[i])%(n-1)==0 && (temp + a[i])>0){
        //         cout<<(temp + a[i])/(n-1)<<endl;
        //         break;
        //     }
        // }
        // cout<<ans<<endl;
    }
}