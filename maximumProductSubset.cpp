#include <bits/stdc++.h>
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
    int neg_num = 0;
    int zero =0;
    int lar_neg = INT_MIN;
    int prod = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            neg_num++;
            if (lar_neg < a[i])
                lar_neg = a[i];
        }
        if (a[i] != 0)
            prod *= a[i];
        else zero ++;
    }
    // cout<<prod<<endl;
    // cout<<lar_neg<<endl;
    if(zero ==n )prod =0;
    if (neg_num == 1 && n > 1 && (prod == lar_neg))
    {
        prod = 0;
    }
    if ((neg_num & 1))
        prod /= lar_neg;
    cout << prod << endl;
}