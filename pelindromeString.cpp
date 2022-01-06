#include <iostream>
#include <string>
using namespace std;

main()
{
    string input;
    int flag = 1;
    getline(cin, input);
    for (int i = 0; i < input.length() / 2; i++)
    {
        // cout << "checking for : " << input[i] << " and :" << input[(input.length() - 1) - i];
        if (input[i] != input[(input.length() - 1) - i])
        {
            // cout << "checking for : " << input[i] << " and :" << input[(input.length() - 1) - i];
            flag = 0;
            break;
        }
    }
    cout << flag << endl;
}