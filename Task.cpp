#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> a, pair<int, int> b)
{
    float r1 = a.first / a.second;
    float r2 = b.first / b.second;
    if (r1 >= r2)
        return r1 >= r2;
    return r1 >= r2;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<pair<int, int>> apples;
        for (int i = 0; i < n; i++)
        {
            int vit;
            int price;
            cin >> vit >> price;
            apples.push_back({vit, price});
        }
        sort(apples.begin(), apples.end(), comp);
        long long int purchased_vit = 0;
        for (int i = 0; i < n; i++)
        {
            if (m >= apples[i].second)
            {
                purchased_vit += apples[i].first;
                m -= apples[i].second;
            }
            else
            {
                if (m >= apples[i].second / 2)
                {
                    purchased_vit += apples[i].first;
                    break;
                }
            }
            if (m == 0)
                break;
        }
        cout << purchased_vit << endl;
    }
}