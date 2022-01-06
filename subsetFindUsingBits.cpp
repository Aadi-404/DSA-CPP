#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> subsetfind(vector<int> &arr)
{
    int n = arr.size();
    int subset_count = (1 << n);
    vector<vector<int>> subsets;
    for (int i = 0; i < subset_count; i++)
    {
        vector<int> subset;
        for (int j = 0; j < n; j++)
        {
            // cout << (1 & (1 << j)) << endl;
            if ((i & (1 << j)) != 0)
            {
                subset.push_back(arr[j]);
            }
        }
        subsets.push_back(subset);
    }
    return subsets;
}

main()
{
    vector<int> n = {2, 4, 5, 9, 10};
    auto subsets = subsetfind(n);
    for (auto &subset : subsets)
    {
        for (auto &ele : subset)
            cout << ele << " ";
        cout << endl;
    }
}