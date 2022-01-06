#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    // cin>>;
    while (t--)
    {
        int m, n;
        cin >> m >> n;
        m--;
        n--;
        int r[n], c[m];
        for (int i = 0; i < m; i++)
        {
            cin >> c[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> r[i];
        }
        sort(c, c + m);
        sort(r, r + n);
        int row = 1;
        int col = 1;
        int i = n - 1;
        int j = m - 1;
        int sum = 0;
        while (j>=0 && i >=0) // m -> column line  and n --> row line
        {
            if (r[i] > c[j])
            {
                sum += (col * r[i]);
                row++;
                i--;
            }
            else
            {
                sum += (row * c[j]);
                col++;
                j--;
            }
            // cout << "Sum : " << sum << endl;
        }
        // cout<<i<<" <---- i & j -----> "<<j<<endl;
        // cout<<row<<" <----row & col ----> "<<col<<endl;
        while (j >= 0)
        {
            sum += row * c[j];
            col ++;
            // cout << "Sum : " << sum << endl;
            j--;
        }
        while (i >= 0)
        {
            // cout<<i<<endl;
            sum += col * r[i];
            row ++;
            // cout << "Sum : " << sum << endl;
            i--;
        }
        cout << sum << endl;
    }
}