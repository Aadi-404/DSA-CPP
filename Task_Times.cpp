#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
        return a.second != b.second;
    return a.first < b.first;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k; // n -> no of topics , m -> subject , k -> hours remaining
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            int sec;
            cin >> sec;
            v.push_back({0, sec});
        }
        for (int i = 0; i < n; i++)
        {
            int fir;
            cin >> fir;
            v[i].first = fir;
        }
        sort(v.begin(), v.end(),comp);
        vector<int> topicCount(n, 0);

        // for (auto i : v)
        // {
        //     cout << i.first << " : " << i.second << "    ";
        // }
        // cout << endl;
        for (auto it : v)
        {
            if (k >= it.first)
            {
                k -= it.first;
                topicCount[it.second - 1]++;
            }
            else
            {
                break;
            }
        }
        // for (auto i : topicCount)
        // {
        //     cout << i << "  ";
        // }

        int ans = 0;
        for (auto it : topicCount)
        {
            // cout << "it " << it << " ";
            // cout<<"ceil : "<<ceil(it/2);
            ans += (it + 1) / 2;
            // cout << "ans : " << ans << " ";
        }
        cout << ans << endl;
    }
}