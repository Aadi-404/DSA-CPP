// Chef and dice problem
//  April challenge 2021

#include <iostream>
using namespace std;
main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        // cout << "value of n :" << n << endl;
        // int ans;
        // if (n == 1)
        // {
        //     cout << "In if part :" << endl;
        //     ans = 20;
        // }
        // else
        // {
        //     cout << "In else part :" << endl;
        //     ans = (n - 2) * 14 + 40;
        // }
        long long int ans = 0;
        // ans= ( n% 4) * 44;
        if (n >= 4)
        {

            switch (n % 4)
            {
            case 0:
            {
                ans = (n / 4) * 44 + 16;
                break;
            };
            case 1:
            {
                ans = (n / 4) * 44 + 20 + 12;
                break;
            }
            case 2:
            {
                ans = (n / 4) * 44 + 36 + 8;
                break;
            }
            case 3:
                ans = (n / 4) * 44 + 51 + 4;
                break;
            }
        }
        else
        {
            switch (n % 4)
            {

            case 1:
            {
                ans = 20;
                break;
            }
            case 2:
            {
                ans = 36;
                break;
            }
            case 3:
                ans = 51;
                break;
            }
        }

        cout << ans << endl;
    }
}