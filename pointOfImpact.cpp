#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N, K, x, y;
        cin >> N >> K >> x >> y;
        K = K % 4;
        if (x == y)
        {
            cout << N << " " << N << endl;
        }
        else
        {

            int d = min(N - x, N - y);
            y += d;
            x += d;

            if (K == 1)
            {
                cout << x << " " << y << endl;
            }
            else if (K == 2)
            {
                cout << y << " " << x << endl;
            }
            else if (K == 3)
            {
                cout << N - x << " " << N - y << endl;
            }
            else if (K == 0)
            {
                cout << N - y << " " << N - x << endl;
            }
        }
    }
}