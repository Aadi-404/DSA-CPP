#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    int j = 1;
    while (j <= t)
    {
        int k, n, t;
        long long int b;
        cin >> n >> k >> b >> t;
        long long int x[n];
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        long long int swaps = 0;
        int possible = 0; //  possible -> possible to reach in given time t;
        int not_possible = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            long long int DistToBarn = b - x[i];
            long long int DistPossible = v[i] * t;
            if (DistPossible >= DistToBarn)
            {
                possible++;
                if (not_possible > 0)
                {
                    swaps += not_possible;
                }
            }
            else
            {
                not_possible++;
            }

            if (possible >= k)
                break;
        }
        if (possible >= k)
        {
            cout << "Case #" << j << ": " << swaps << endl;
        }
        else
        {
            cout <<"Case #"<<j<<": "<< "IMPOSSIBLE" << endl;
        }

        j++;
    }
}