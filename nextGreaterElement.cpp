#include <bits/stdc++.h>
using namespace std;

class solution
{
public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> a, int n)
    {
        stack<long long> s;

        // Your code here
        vector<long long> res(n);
        s.push(0);
        for (int i = 1; i < n; i++)
        {
            if (a[s.top()] < a[i])
            {
                while (a[s.top()] < a[i])
                {
                    res[s.top()] = a[i];
                    s.pop();
                    if (s.empty())
                    {
                        break;
                    }
                }
                s.push(i);
            }
            else
            {
                s.push(i);
            }
        }
        while (!s.empty())
        {
            res[s.top()] = -1;
            s.pop();
        }
        for (int i : res)
        {
            cout <<i << " ";
        }
        cout << endl;

        return res;
    }
};

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        solution obj;
        vector<long long> res = obj.nextLargerElement(a, n);
        for (int i : res)
        {
            cout << i << " ";
        }
    }

    // stack<int> s;
    // int a[6] = {8, 4, 6, 2, 7, 9};
    // int res[6] = {};
    // s.push(0);
    // for (int i = 1; i < 6; i++)
    // {
    //     if (a[s.top()] < a[i])
    //     {
    //         while (a[s.top()] < a[i])
    //         {
    //             res[s.top()] = a[i];
    //             s.pop();
    //             if (s.empty())
    //             {
    //                 break;
    //             }
    //         }
    //         s.push(i);
    //     }
    //     else
    //     {
    //         s.push(i);
    //     }
    // }
    // while (!s.empty())
    // {
    //     res[s.top()] = -1;
    //     s.pop();
    // }
    // cout << "res : array - " << endl;
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << res[i] << " " << endl;
    // }
}
