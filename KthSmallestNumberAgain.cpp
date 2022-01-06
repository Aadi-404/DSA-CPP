#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<pair<long long,long long>> range;
        for (int i = 0; i < n; i++)
        {
            long long first, second;
            cin >> first >> second;
            range.push_back({first, second});
        }
        sort(range.begin(), range.end());
        // merge
        int idx = 0;
        for (int i = 1; i < range.size(); i++)
        {
            if (range[i].first <= range[idx].second)
            {
                range[idx].second = max(range[i].second, range[idx].second);
            }
            else
            {
                idx++;
                range[idx] = range[i];
            }
        }

        // main answer
        for (int i = 0; i < q; i++)
        {
            long long k;
            cin >> k;
            long long ans = -1;
            int l = 0;
            long long diff = (range[l].second - range[l].first) + 1;
            while (diff < k && l <= idx)
            {
                k -= diff;
                l++;
                diff = (range[l].second - range[l].first) + 1;
            }
            if(l<=idx)ans = range[l].first +(k-1);
            cout<<ans<<endl;

        }
    }
}