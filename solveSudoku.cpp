#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid
#define UNASSIGNED 0

// N is used for the size of Sudoku grid.
// Size will be NxN
#define N 9

class Solution
{
public:
    pair<int, int> next(int grid[N][N], int row, int col)
    {
        int i = row, j = col;
        for (i; i < N; i++)
        {
            for (j; j < N; j++)
            {
                if (grid[i][j] == 0)
                {
                    return {i, j};
                }
            }
            j = 0;
        }
        return {-1, -1};
    }
    bool check(int grid[N][N], int n, pair<int, int> loc, int value)
    {
        // column && row  check
        // int count = 0;
        for (int i = 0; i < n; i++)
        {
            //column check
            if (grid[i][loc.second] == value)
            {
                return false;
            }
            //row check
            if (grid[loc.first][i] == value)
            {
                return false;
            }
            if (grid[(loc.first / 3) * 3 + i / 3][(loc.second / 3) * 3 + i % 3] == value)
                return false;
        }
        return true;
    }
    bool solve(int grid[N][N], int n, pair<int, int> p)
    {
        for (int i = 1; i <= N; i++)
        {
            if (check(grid, n, p, i))
            {
                grid[p.first][p.second] = i;
                pair<int, int> nextLoc = next(grid, p.first, p.second);
                cout << endl;
                // cout<<"next loc : "<<nextLoc.first<<"  "<<nextLoc.second<<endl;
                if (nextLoc.first == -1 && nextLoc.second == -1)
                {
                    // printGrid(grid);
                    return true;
                }
                if (solve(grid, n, nextLoc))
                    return true;
                grid[p.first][p.second] = 0;
            }
        }
        return false;
    }
    //Function to find a solved Sudoku.
    bool SolveSudoku(int grid[N][N])
    {
        int n = N;
        pair<int, int> p = next(grid, 0, 0);
        bool s = solve(grid, n, p);
        return true;
        // Your code here
    }

    //Function to print grids of the Sudoku.
    void printGrid(int grid[N][N])
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
        // cout << "running print" << endl;
        // Your code here
    }
};
int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        int grid[N][N];

        for (int i = 0; i < 9; i++)
            for (int j = 0; j < 9; j++)
                cin >> grid[i][j];

        Solution ob;

        if (ob.SolveSudoku(grid) == true)
            ob.printGrid(grid);
        else
            cout << "No solution exists";

        cout << endl;
    }

    return 0;
} // } Driver Code Ends