#include <bits/stdc++.h>
using namespace std;

bool sumZero(vector<int> &temp, int &l, int &r)
{
    unordered_map<int, int> m;
    int ans = 0;
    int sum = 0;
    for (int i = 0; i < temp.size(); i++)
    {
        sum += temp[i];

        if (temp[i] == 0 && ans == 0)
        {
            ans = 1;
            l = 0;
            r = 0;
        }

        if (sum == 0 and ans < i + 1)
        {
            ans = i + 1;
            l = 0;
            r = i;
        }

        if (m.find(sum) == m.end())
            m[sum] = i;
        else
        {
            if (ans < i - m[sum])
            {
                ans = max(ans, i - m[sum]);
                l = m[sum] + 1;
                r = i;
            }
        }
    }
    // cout<<ans<<"  ";
    return ans;
}
void sumZeroMatrix(int a[][3], int row, int col)
{
    int left = 0, right = 0, up = 0, down = 0;
    int size = 0;
    for (int i = 0; i < row; i++)
    {
        vector<int> temp(col, 0);
        for (int j = i; j < row; j++)
        {
            for (int k = 0; k < col; k++)
            {
                temp[k] += a[j][k];
            }
            int l = -1;
            int r = -1;
            bool change = sumZero(temp, l, r);
            // cout<<l <<" l-r  "<<r<<"  "<<change<<"   noElements-> ";
            int no_Element = (r - l + 1) * (j - i + 1);
            // cout << no_Element << endl;

            if (change && no_Element > size)
            {
                left = l;
                right = r;
                up = i;
                down = j;
                size = no_Element;
            }
        }
    }
    if (!up && !down && !left and !right and a[0][0] != 0)
        cout << "-1";
    else
    {

        for (int i = up; i <= down; i++)
        {
            for (int j = left; j <= right; j++)
                cout << a[i][j] << "  ";
            cout << endl;
        }
    }
    // cout << left << "  " << right << "  " << up << "  " << down << "  " << endl;
}

int main()
{
    int a[3][3] = {{1, 2, 3}, {-3, -2, -1}, {1, 7, 5}};

    int row = 3, col = 3;
    sumZeroMatrix(a, row, col);
    return 0;
}