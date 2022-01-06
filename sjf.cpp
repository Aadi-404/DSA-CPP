#include <bits/stdc++.h>
using namespace std;

bool comp(vector<int> a, vector<int> b)
{
    if (a[1] == b[1])
    {
        if (a[2] == b[2])
        {
            return a[0] < b[0];
        }
        else
            return a[2] < b[2];
    }
    else
        return a[1] < b[1];
}

main()
{
    int n;
    cin >> n;
    vector<vector<int>> v(n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    sort(v.begin(), v.end(), comp);
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    pq.push({v[0][2], v[0][1], v[0][0]});
    vector<int> ans;
    int curr_time = 0;
    int i = 1;
    while (!pq.empty())
    {
        int id = pq.top()[2];
        int burst = pq.top()[0];
        pq.pop();
        ans.push_back(id);
        curr_time += burst;
        while (i < n)
        {
            if (v[i][1] <= curr_time)
            {
                pq.push({v[i][2], v[i][1], v[i][0]});
                i++;
            }
            else
            {
                break;
            }
        }
    }
    for (int a : ans)
    {
        cout << a << " ";
    }
}