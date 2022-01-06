#include <iostream>
#include <vector>
using namespace std;
main()
{
    int num, sum;
    bool flag = false;
    pair<int, int> p;
    cin >> num, sum;
    int arr[num];
    cin >> arr[0];
    p.first = arr[0];
    p.second = NULL;
    for (int i = 1; i < num; i++)
    {
        cin >> arr[i];
        if ((p.first + arr[i]) == sum)
        {
            flag = true;
            p.second = arr[i];
        }
    }

    for (int i = 1; i < num; i++)
    {
        if ((p.first + p.second) == sum)
        {
            break;
        }
        p.first = arr[i];
        for (int j = 2; j < num; j++)
        {

            if ((p.first + arr[i]) == sum)
            {
                flag = true;
                p.second = arr[i];
                break;
            }
        }
    }
    if (flag)
    {
        cout << "yes" << endl;
    }
    else
    {
        cout << "no" << endl;
    }
}