#include <bits/stdc++.h>
using namespace std;
main()
{
    while (1)
    {
        int n1, n2;
        cin >> n1;
        if (n1 == 0)
            break;
        int a1[n1];
        for (int i = 0; i < n1; i++)
            cin >> a1[i];
        cin >> n2;
        int a2[n2];
        for (int i = 0; i < n2; i++)
            cin >> a2[i];
        long long i = 0, j = 0, sum1 = 0, sum2 = 0, total = 0;
        while (i < n1 && j < n2)
        {
            if (a1[i] > a2[j])
            {
                sum2 += a2[j];
                j++;
            }
            else if (a1[i] < a2[j])
            {
                sum1 += a1[i];
                i++;
            }
            else
            {
                total += max(sum1, sum2) + a1[i];
                sum1 = 0;
                sum2 = 0;
                i++;
                j++;
            }
        }
        if (i >= n1)
        {
            while (j < n2)
            {
                sum2 += a2[j];
                j++;
            }
        }
        else
        {
            while (i < n1)
            {
                sum1 += a1[i];
                i++;
            }
        }
        total += max(sum1, sum2);
        cout << total << endl;
    }
}