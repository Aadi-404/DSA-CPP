#include <bits/stdc++.h>
using namespace std;

main()
{
    int n = 84;
    int low = 1;
    int high = 5 * n;
    int ans;
    if (n == 1)
        cout << "5" << endl;
    else
    {
        while (low <= high)
        {
            int sum = 0;
            int k = 5;

            int mid = (high + low) >> 1;
            while (mid/k != 0)
            {

                sum += mid / k;
                k *= 5;
                // cout << "sum :" << sum << endl;
            }
            //complete the function here
            if (sum >= n)
            {
                // cout << "ans :" << mid << endl;
                high = mid - 1;
                ans = mid;
            }
            else
                low = mid + 1;
        }
        cout << ans << endl;
    }
}