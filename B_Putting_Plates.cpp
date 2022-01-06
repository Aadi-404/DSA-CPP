#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w, h;
        cin >> h >> w;
        vector<vector<int>> v(h, vector<int>(w, 0));
        v[0][0] = 1;
        v[0][w - 1] = 1;
        v[h - 1][0] = 1;
        v[h - 1][w - 1] = 1;
        for (int i = 1; i < (w - 1); i++) // for first row
        {
            if (!v[0][i - 1] && !v[0][i + 1])
                v[0][i] = 1;
        }
        for (int i = 1; i < (w - 1); i++) // for last row
        {
            if (!v[h - 1][i - 1] && !v[h - 1][i + 1])
                v[h - 1][i] = 1;
        }
        for (int i = 1; i < (h - 1); i++) // for first col
        {
            if (!v[i - 1][0] && !v[i + 1][0])
                v[i][0] = 1;
        }
        for (int i = 1; i < (h - 1); i++) // for last col
        {
            if (!v[i - 1][w - 1] && !v[i + 1][w - 1])
                v[i][w - 1] = 1;
        }
        // cout << v[0][0];
        // for (int i = 0; i < h; i++)
        // {
        //     for (int j = 0; j < w; j++)
        //     {
        //         if (!(v[i][j - 1]) && !(v[i - 1][j]) )
        //             v[i][j] = 1;
        //     }
        // }
        for (auto row : v)
        {
            for (auto col : row)
            {
                cout << col;
            }
            cout << endl;
        }
        cout << endl;
    }
}