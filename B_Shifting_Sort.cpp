#include <bits/stdc++.h>
using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int low = 0;
        int high = n - 1;
        // cout<<high<<endl;
        int shiftCount = 0;
        while (low < high)
        {
            int maxi = INT_MIN;
            // cout << low << "  " << high << endl;
            int pos;
            int d;
            for (int i = low; i <= high; i++)
            {
                if (maxi <= a[i])
                {
                    pos = i;
                    // cout << "pos  " << pos << endl;
                    maxi = a[i];
                }
            }
            if (pos != high)
            {
                d = pos - low + 1;
                vector<int> tempV = {low + 1, high + 1, d};
                ans.push_back(tempV);
                int shift = d;
                shiftCount++;
                while (shift--)
                {
                    int temp = a[low];
                    for (int i = low + 1; i <= high; i++)
                    {
                        a[i - 1] = a[i];
                    }
                    a[high] = temp;
                }
                high--;
            }
            else
            {
                high--;
            }
            // cout << d << "  " << endl;

            // for (auto it : a)
            // {
            //     cout << it << "  ";
            // }
            // cout << endl;
            // cout<<low <<"  "<<high<<endl;
        }
        // cout << endl;
        cout << shiftCount << endl;

        for (auto it : ans)
        {
            for (auto a : it)
            {
                cout << a << " ";
            }
            cout << endl;
        }
    }
}