#include <bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, c;
        cin >> n >> c;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        int low = 1;
        int high = 1e9;
        int ans = 0;
        while (low <= high)

        {
            int mid = (low + high) / 2;
            int cow = 1;
            int prev = a[0];
            for (int i = 1; i < n; i++)
            {
                if ((a[i] - prev) >= mid)
                {
                    cow++;
                    prev = a[i];
                    if (cow == c)
                        break;
                }
            }
            if (cow == c)
            {
                ans = mid;
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        cout << ans << endl;
    }
}