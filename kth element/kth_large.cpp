#include <iostream>
using namespace std;
main()
{
    // No. of cases
    int cases;
    cin >> cases;

    // Loop for cases
    for (int i = 0; i < cases; i++)
    {
        // No. of element in array
        int n;
        cin >> n;
        int arr[n];
        // int *arr;
        // arr = (int *)malloc(n * sizeof(int));

        // Reading value of element
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        // Sorting array

        int temp;
        for (int l = 1; l < n; l++)
        {

            for (int k = 0; k < n - l; k++)
            {
                if (arr[k] > arr[k + 1])
                {
                    temp = arr[k];
                    arr[k] = arr[k + 1];
                    arr[k + 1] = temp;
                }
            }
        }
       for (int k = 0; k < n; k++)
       {
        cout << arr[k];
           
       }
       
    }
}