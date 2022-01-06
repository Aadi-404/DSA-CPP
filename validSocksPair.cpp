// April long challenge codechef
// valid pair socks

#include <iostream>
using namespace std;
main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b)
    {
        cout << "YES" << endl;
    }
    else if (a == c)
    {
        cout << "YES" << endl;
    }
    else if (b == c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
