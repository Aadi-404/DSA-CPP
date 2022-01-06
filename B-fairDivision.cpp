#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        int arr[n];
        long long int no_of_ones = 0, no_of_2s = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (arr[i] == 1)
            {
                no_of_ones++;
            }
            if (arr[i] == 2)
            {
                no_of_2s++;
            }
        }

        if (no_of_ones % 2 == 1)
        {
            cout << "no" << endl;
        }
        else
        {

            if (no_of_2s % 2 == 1)
            {
                if (no_of_ones == 0)
                {
                    cout << "no" << endl;
                }
                else
                {
                    cout<<"yes"<<endl;
                }
            }

            else
            {
                cout << "yes" << endl;
            }
        }
    }
}