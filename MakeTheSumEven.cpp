#include <iostream>
#include <algorithm>
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
        int sum = 0;
        vector <int> v;
        int ans;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }
        if ((sum & 1) == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (v[i] == 2)
                {
                    ans = 1;
                    break;
                }
            }
            if (ans == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }
    return 0;
}