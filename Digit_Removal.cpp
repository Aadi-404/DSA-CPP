#include <bits/stdc++.h>
using namespace std;
void solve()
{
    long long int n, d;
    cin >> n >> d;
    int pos = -1;
    long long int dup = n;
    int currPos = 0;
    while (dup) // finding the leftmost position
    {
        if (dup % 10 == d)
        {
            pos = currPos;
        }
        dup /= 10;
        currPos += 1;
    }
    if (pos == -1)
    {
        cout << 0 << endl;
        return;
    }
    long long int num = 1;

    long long int tempNum = 0;
    long int ans;

    if (d == 0)
    {
        int it = pos;
        // while (it)
        // {
        //     num = num*10 + num;
        //     it--;
        // }
        // cout<<"num  "<<num<<endl;
        dup = n;
        long long int mult = 1;
        while (pos)
        {
            // cout<<"mult  "<<mult<<endl;
            num = 10 * mult + num;
            int dig = dup % 10;
            tempNum = ((dig * mult) + tempNum);
            dup /= 10;
            mult *= 10;
            pos--;
        }
        // cout << "num  " << num << endl;
        ans = num - tempNum;
    }
    else
    {
        int it = pos;
        // while (it)
        // {
        //     num *= 10;
        //     it--;
        // }

        dup = n;
        long long int mult = 1;
        long long int tempNum = 0;

        while (pos)
        {
            num *= 10;
            int dig = dup % 10;
            tempNum = ((dig * mult) + tempNum);
            dup /= 10;
            mult *= 10;
            pos--;
        }
        ans = num - tempNum;
    }
    cout << ans << endl;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}