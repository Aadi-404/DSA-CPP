#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string input_from_user;
        cin >> input_from_user;
        if (input_from_user.length() & 1)
            cout << "NO" << endl;
        else
        {
            int nA = 0, nB = 0, nC = 0;
            for (auto it : input_from_user)
            {
                if (it == 'A')
                    nA++;
                if (it == 'B')
                    nB++;
                if (it == 'C')
                    nC++;
            }
            if ((nA + nC) == nB)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
}