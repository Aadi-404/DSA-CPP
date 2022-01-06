// sorting of 0,1,2 without using any sort algorithms

#include <iostream>
using namespace std;
main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int l, h, m, temp;
    l = 0;
    m = 0;
    h = n - 1;
    while (m < (h + 1))
    {
        if (a[m] == 0)
        {
            temp = a[m];
            a[m] = a[l];
            a[l] = temp;
            l++;
            m++;
        }
        else if (a[m] == 2)
        {
            temp = a[m];
            a[m] = a[h];
            a[h] = temp;
            h--;
        }
        else
        {
            m++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}