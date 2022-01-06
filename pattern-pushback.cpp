#include <iostream>
using namespace std;
main()
{
    int t;
    cin >> t;
    int d = 2;
    while (t--)
    {
        float n;
        cin >> n;
        float sum = ((4 * 2 + (n - 2) * d));
        float mult = (n-1)/2;
        float ans = mult * sum;
        cout << 2 + ans << endl;
    }
}