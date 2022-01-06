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
        int ans = 1;
        for (int i = 2; i <= n; i++)
        {
            ans += (1 + (i - 1) * 4);
        }
        cout<<ans<<endl;
    }
}