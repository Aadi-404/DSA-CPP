#include <iostream>
using namespace std;

main()
{
    int t,end;
    cin >> t;
    while (t--)
    {
        int x, n;
        long long int y;
        cin >> x;
        cin >> y;
        cin >> n;
        int ans = 1;
        while (y > 0)
        {
            if (y & 1)
            {
                ans = (ans * x) % n;
            }
            x = (x * x) % n;
            y >>= 1;
        }
        cout << ans << endl;
    }
        cin >> end;
}