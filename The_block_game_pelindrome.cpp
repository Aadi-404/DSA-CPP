#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        vector<int> v;
        int flag = 1;
        while (x != 0)

        {
            v.push_back(x % 10);
            x /= 10;
        }
        for (int i = 0; i < v.size() / 2; i++)

        {
            if (v[i] != v[(v.size() - i - 1)])
            {
                flag = 0;
            }
        }
        if (flag == 0)
        {
            cout << "loses" << endl;
        }

        else
        {
            cout << "wins" << endl;
        }
    }
}