//  April challenge 2021
//  strong language
//  SSCRIPT
#include <iostream>
#include <string>
#include <limits>

using namespace std;
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        string s;
        // cin.ignore(std::numeric_limits<std::streamsize>::max());
        cin >> s;
        int count = 0, flag = 0;
        char temp = s[0];
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
            {
                count++;
                if (count == k)
                {
                    flag = 1;
                    break;
                }
            }
            else
            {
                count = 0;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}