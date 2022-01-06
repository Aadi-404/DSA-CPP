#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int m, n, k;
        cin >> n >> m >> k;
        int res = 0, ans;

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                ans = k + i + j;
                res = res ^ ans;
            }
        }
        cout << res << endl;
    }
}