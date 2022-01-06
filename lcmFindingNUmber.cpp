#include <iostream>
#include <vector>
using namespace std;

main()
{
    int a, b, c, d, e;
    cin >> d >> e;
    vector<int> first;
    for (int i = 2; i < d; i++)
    {
        if (d % i == 0)
        {
            first.push_back(i);
        }
    }

    for (int i = 2; i < e; i++)
    {
        if (e % i == 0)
        {
            for (int j = 0; j < first.size(); j++)
            {
                if (i == first[j])
                {
                    a = i;
                    break;
                }
            }
        }
    }
    b = d / a;
    c = e / a;
    cout << "Numbers are : " << a << " " << b << " " << c << " " << endl;
}