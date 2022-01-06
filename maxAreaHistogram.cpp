#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        stack<int> st;
        long long int mx = 0;
        for (int i = 0; i <= n; i++)
        {
            while (!st.empty() && (i == n || arr[st.top()] >= arr[i]))
            {
                long long int height = arr[st.top()];
                st.pop();
                long long int width;
                if (st.empty())
                    width = i;
                else
                    width = i - st.top() - 1;
                long long int area = height * width;
                mx = max(mx, area);
            }
            st.push(i);
            // // Your code here
            // int left[n];
            // int right[n];
            // stack<int> st;
            // for (int i = 0; i < n; i++)
            // {
            //     while (!st.empty() && (arr[st.top()] >= arr[i]))
            //         st.pop();

            //     if (st.empty())
            //     {
            //         left[i] = 0;
            //         st.push(i);
            //     }
            //     else
            //     {
            //         left[i] = st.top() + 1;
            //         st.push(i);
            //     }
            // }
            // while (!st.empty())
            //     st.pop();

            // long long int mx = 0;
            // for (int i = n - 1; i >= 0; i--)
            // {
            //     while (!st.empty() && arr[st.top()] >= arr[i])
            //     {
            //         st.pop();
            //     }
            //     if (st.empty())
            //         right[i] = n - 1;
            //     else
            //         right[i] = st.top() - 1;
            //     st.push(i);
            // }
            // for (int i = 0; i < n; i++)
            // {
            //     mx = max(mx, (right[i] - left[i] + 1) * arr[i]);
            }
            return mx;
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

            long long int arr[n];
            for (int i = 0; i < n; i++)
                cin>> arr[i];
            Solution ob;
            cout << ob.getMaxArea(arr, n) << endl;
        }
    }