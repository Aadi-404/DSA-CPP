

#include <iostream>
using namespace std;

main()
{

    int cases;
    cin >> cases;

    // loop for the cases
    for (int l = 0; l < cases; l++)
    {

        // Input from User
        int n;
        cin >> n;

        // Memory allocation
        int b = 1;
        int *store = (int *)malloc(b * sizeof(int));
        *store = 1;
        int temp = 0;

        // factorial calculation
        for (int i = 2; i <= n; i++)
        {
            for (int j = 0; j < b; j++)
            {
                int x;
                x = *(store + j) * i + temp;
                *(store + j) = x % 10;
                temp = x / 10;
            }
            while (temp)
            {
                b++;
                store = (int *)realloc(store, b * sizeof(int));
                *(store + (b - 1)) = temp % 10;
                temp /= 10;
            }
        }



        // Printing numbers
        for (int k = b - 1; k >= 0; k--)
        {
            cout << *(store + k);
        }
        cout<<endl;
    }
}