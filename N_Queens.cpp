#include <bits/stdc++.h>
using namespace std;

void solve(vector<vector<string>> &ans, vector<string> &board, vector<int> &up, vector<int> &upperdiagonal, vector<int> &lowerdiagonal, int n, int row)
{
    if (row == n)
    {
        // for (auto v : board)
        // {
        //     cout << v;
        // }
        ans.push_back(board);
        return;
    }
    for (int j = 0; j < n; j++)
    {
        if (up[j] == 0 && upperdiagonal[(n - 1) + (j - row)] == 0 && lowerdiagonal[j + row] == 0)
        {
            board[row][j] = 'Q';
            up[j] = 1;
            upperdiagonal[(n - 1) + (j - row)] = 1;
            lowerdiagonal[j + row] = 1;
            solve(ans, board, up, upperdiagonal, lowerdiagonal, n, row + 1);
            board[row][j] = '.';
            up[j] = 0;
            upperdiagonal[(n - 1) + (j - row)] = 0;
            lowerdiagonal[j + row] = 0;
        }
    }
}
main()
{
    int n = 4;
    vector<vector<string>> ans;
    string s(n, '.');
    vector<string> board(n);
    for (int i = 0; i < n; i++)
    {
        board[i] = s;
    }
    vector<int> up(n, 0), upperdiagonal(2 * n - 1, 0), lowerdiagonal(2 * n - 1, 0);

    solve(ans, board, up, upperdiagonal, lowerdiagonal, n, 0);

    for (auto v : ans)
    {
        for (auto a : v)
        {
            cout << a<<endl;
        }
        cout<<endl<<endl<<endl;
    }
}