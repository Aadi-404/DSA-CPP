#include <iostream>

using namespace std;
main()
{
    int a[7] = {4, 6, 22, 59, 53, 39, 79};
    int min, max;
    min = a[0];
    max = a[0];
    for (int i = 1; i < sizeof(a) / sizeof(a[0]); i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
        else if (min > a[i])
        {
            min = a[i];
        }
    }
    cout << "Minimum :" << min << endl
         << "Maximum :" << max << endl;
}