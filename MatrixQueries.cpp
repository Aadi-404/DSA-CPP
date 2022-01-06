#include <iostream>

#include <limits>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r = 0, c = 0;
        cin >> r >> c;
        int a[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        int q;
        cin >> q;

        while (q--)
        {
            char ch;
            cin >> ch;
            // cin.ignore(numeric_limits<streamsize>::max(), '\n');
            if (ch == 'a')
            {
                int x, y, val;
                cin >> x >> y >> val;
                a[x - 1][y - 1] = val;
            }
            else
            {
                int x1, y1, x2, y2, sum = 0;
                cin >> x1 >> y1 >> x2 >> y2;
                for (int i = x1; i <= x2; i++)
                {
                    for (int j = y1; j <= y2; j++)
                    {
                        sum += a[i - 1][j - 1];
                    }
                }
                cout << sum << endl;
            }
        }
    }
}