#include <iostream>
using namespace std;
main()
{
    // Taking Input from the User
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m = 0, l = 0, h, temp;
    h = n - 1;
    while (m < h + 1)
    {
        // low Condition 
        if (a[m] < 0)
        {
            temp = a[m];
            a[m] = a[l];
            a[l] = temp;
            l++;
            m++;
        }
        else if (a[m] > 0)
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
