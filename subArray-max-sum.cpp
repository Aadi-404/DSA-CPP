        // USING KADANE'S ALGORITHM

#include <iostream>
using namespace std;
main()
{
    int t, n;
    cin >> t;
    cout << t << "<-- Test cases" << endl;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        cout << n << "<-- No of element in array" << endl;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin>>a[j];
        }
        
        int sum = 0, max = a[0];

        for (int j = 0; j < n; j++)
        {
            cout << a[j] << "<-- element in array" << endl;

            sum += a[j];
            if (max < sum)
            {
                max = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        cout << max << endl;
    }
}