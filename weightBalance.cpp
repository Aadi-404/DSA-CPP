#include <iostream>
using namespace std;

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int w1,w2,x1,x2,M;
        float cal;
        cin>>w1>>w2>>x1>>x2>>M;
        cal= w2- w1;
        cal /= M;
        if (cal <= x2 && cal>= x1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
        
    }
}