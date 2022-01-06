#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n)
{
    int t;
    cin >> t;
    while (t--)
    {
        int power;
        cin >> power;
        int sum = 0;
        int i = 0;
        for (i = 0; i < n; i++)
        {
            if (power < a[i])
                break;
            sum += a[i];
        }
        cout<<i<<" "<<sum<<endl;
    }
}

main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    solve(a, n);
}