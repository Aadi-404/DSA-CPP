#include <bits/stdc++.h>
using namespace std;
void solve()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
    string s;
    cin >> s;
    int ans = 0;
    int n = s.length();
    if (n == 1)
    {
        // cout<<"here "<<endl;
        cout << ans << endl;
        return;
    }
    vector<int> preSum(n + 1, 0);
    int pre = 0;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            pre++;
        preSum[i + 1] = pre;
        // cout << preSum[i + 1] << "  ";
    }
    // cout << "in k loop ";
    for (int k = 1; k * k + k <= n; k++)
    {
        int len = k * k + k;
        for (int i = 0; (i + len) <= n; i++)
        {
            int n1 = preSum[i+len] - preSum[i];
            int n0 = len - n1;
            // cout<<"for i : len "<<i<<" : "<<len<<" n1 : n0 "<<n1<<" : "<<n0<<endl;
            if (n0 == n1 * n1)
            {
                // cout<<"i "<<i<<endl;
                ans++;
                // cout << ans << endl;
            }
        }
    }

    cout << ans << endl;
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