#include <bits/stdc++.h>
using namespace std;
bool solve(vector<vector<int>> &board, int n, int dx[], int dy[], int row, int col, int steps)
{ 
    // if (steps == 64)
    //     cout << "steps : 64 " << endl;
    if (steps == n * n)
    {
        // cout << "returning true ...." << endl;
        // for (auto i : board)
        // {
        //     for (auto j : i)
        //         cout << j << " ";
        //     cout << endl;
        // }
        return true;
    }
    for (int k = 0; k < 8; k++)
    {
        // cout<<"in loop of K : "<<k<<endl;
        int i = row + dx[k];
        int j = col + dy[k];
        if (j >= 0 && i >= 0 && i < n && j < n)
        {
            if (board[i][j] == -1)
            {

                // cout << "for row and col :" << i << " " << j << endl;
                board[i][j] = steps;
                // cout << steps << endl;
                if (solve(board, n, dx, dy, i, j, steps + 1))
                    return true;
                else
                    board[i][j] = -1; // backtracking
            }
        }
    }
    return false;
}

main()
{
    int n = 9;
    // cin >> n;
    vector<vector<int>> board(n, vector<int>(n, -1));
    int dx[8] = {-2, -1, 1, 2, -2, -1, 1, 2};
    int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
    int steps = 1;
    board[0][0] = 0;
    if (solve(board, n, dx, dy, 0, 0, steps))
    {
        cout << "printing : " << endl;
        for (auto i : board)
        {
            for (auto j : i)
                cout << j << " ";
            cout << endl;
        }
    }
    else
    {
        cout << "No solution" << endl;
    }
}