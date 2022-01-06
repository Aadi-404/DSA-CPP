#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int check()
{
    string s;
    getline(cin, s);
    sort(s.begin(), s.end());
    int j = 0;
    int i = 0, count = 0, maximum = 0;
    if (s.length() % 2)
    {
        return 0;
    }

    while (s[i] != '\0')
    {
        //     cout << "i : " << i << "j :" << j << endl;
        //     cout << "s[i]: " << s[i] << endl;
        //     cout << "s[j]: " << s[j] << endl;
        if (s[j] == s[i])
        {
            count++;
            j++;
        }
        else
        {
            maximum = max(count, maximum);
            count = 0;
            i = j;
        }
    }
    if (maximum == (s.length() / 2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}




main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {

        int flag;
        flag = check();

        // cout << "String Length : " << s.length() << endl;
        // cout << "maximum : " << maximum << endl;
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