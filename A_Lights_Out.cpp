#include <bits/stdc++.h>
using namespace std;

main()
{
    int grid[3][3];
    int ans[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> grid[i][j];
            grid[i][j] %= 2;
            ans[i][j] = 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (grid[i][j])
            {
                // cout<<"im here";
                ans[i][j] = 1 - ans[i][j];
                if ((i - 1) >= 0)
                    ans[i - 1][j] = 1 - ans[i - 1][j];
                if ((i + 1) < 3)
                    ans[i + 1][j] = 1 - ans[i + 1][j];
                if ((j - 1) >= 0)
                    ans[i][j - 1] = 1 - ans[i][j - 1];
                if ((j + 1) < 3)
                    ans[i][j + 1] = 1 - ans[i][j + 1];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }
}