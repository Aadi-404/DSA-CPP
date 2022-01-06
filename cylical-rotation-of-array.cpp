#include <iostream>
using namespace std;
main()
{
    int cases;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        int n;
        cin >> n;
        int a[n];






        // for (int k = 0; k < n; k++)
        // {
        //     cin >> a[k];
        // }

        // int rep = a[n - 1];
        // for (int j = n-1; j > 0; j--)
        // {
        //     a[j] = a[j - 1];
        // }

        // a[0] = rep;
        // for (int j = 0; j < n; j++)
        // {
        //     cout << a[j];
        // }




        // BEST METHOD 


        for (int j = 1; j < n; j++)
        {
            cin >> a[j];
        }
        cin >> a[0];
        for (int j = 0; j < n; j++)
        {
            cout << a[j];
            cout << " ";
        }
    }
}