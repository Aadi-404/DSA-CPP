#include <iostream>
using namespace std;

int finger(int a)
{
    if (a == 1)
    {
        return 1;
    }
    else
    {
        a = (a - 1)%8;
        a = 5 - abs(a - 4);
    }
    return a;
}
main()
{
    int a;
    cin >> a;

    cout << finger(a);
}