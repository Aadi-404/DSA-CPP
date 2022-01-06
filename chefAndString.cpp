#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string test;
        cin >> test;
        cout << test.length() << endl;

        // shifting the character one place
        int i;
        string leftShift;
        string rightShift;

        rightShift[0] = test[test.length()-1];
        rightShift[1] = test[0];
        for (i = 1; i < test.length(); i++)
        {
            leftShift[i - 1] = test[i];
            rightShift[i + 1] = test[i];
        }
        leftShift[i - 1] = test[0];
        leftShift[i] = '\0';
        rightShift[i] = '\0';

        if (leftShift == rightShift)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}