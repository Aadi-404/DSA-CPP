#include <bits/stdc++.h>
using namespace std;
main()
{
    stack<pair<int, int>> s;
    vector<pair<int, int>> a;
    a.push_back({1, 2});
    a.push_back({5, 6});
    a.push_back({2, 4});
    a.push_back({9, 20});
    a.push_back({5, 8});
    sort(a.begin(), a.end());
    s.push({a[0].first, a[0].second});
    for (int i = 1; i < a.size(); i++)
    {
        if (s.top().second >= a[i].first)
        {
            int stackFirst = s.top().first;
            int stackSecond = s.top().second;
            s.pop();

            s.push({stackFirst, max(stackSecond, a[i].second)});
        }
        else
        {
            s.push({a[i].first, a[i].second});
        }
    }
    while (!s.empty())
    {
        cout << " ( " << s.top().first << "  , " << s.top().second << " ) " << endl;
        s.pop();
    }
}