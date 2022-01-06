// March lunchtime 2021
// running problem

#include <iostream>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, r, m;
        cin >> x >> r >> m;
        long long int timer;

        r *= 60;
        m *= 60;
        if (r % x == 0)
        {
            timer = (((r / x) * 2) - 1) * x;
        }
        else if (r < x)
        {
            timer = r % x;
        }
        else
        {
            timer = (((r / x) * 2) - 1) * x;
            timer += 2 * (r % x);
        }
        if (timer <= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
