#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int high =0;
        while (n > 0)
        {
            high = max(high, n % 10);
            n /= 10;
        }
        cout<<high<<endl;
    }
}