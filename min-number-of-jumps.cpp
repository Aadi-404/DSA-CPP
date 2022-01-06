#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;


// Driver function
main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int jumps[n];
    fill_n(jumps, n, numeric_limits<int>::max());
    jumps[0] = 0;
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if ((arr[j] + j) >= i)
            {
                jumps[i] = min((jumps[j] + 1), jumps[i]);
            }
        }
    }
    // for (int k = 0; k < n; k++)
    // {
    //     cout << "Jumps :" << jumps[k] << endl;
    // }

    cout << jumps[i - 1]<<endl;
}





 