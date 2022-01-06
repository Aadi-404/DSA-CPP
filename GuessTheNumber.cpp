#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        int i = 1;
        for (i; i < 1001; i++)
        {
            cout << i * i << endl;
            cout << flush;
            cin >> a;
            if (a == 1 || a == -1)
            {
                break;
            }
        }
    }
}