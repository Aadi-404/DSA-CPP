#include <bits/stdc++.h>
using namespace std;

main()
{
    long long n, m;
    cin >> n >> m;
    long long a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    long long low = 0;
    long long high = a[n - 1];
    long long ans = 0;
    while (low <= high)
    {
        long long mid = (high + low) >> 1;
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < mid)
                continue;
            sum += (a[i] - mid);
        }
        if (sum >= m)
        {
            low = mid + 1;
            ans = mid;
        }
        else
            high = mid - 1;
    }
    cout<<ans<<endl;
}