#include <iostream>
#include <string>
using namespace std;

main()
{
    // int n;
    // cin >> n;
    //  for (int j = 0; j < n; j++)
    // {}
    int j = 0, n = 3;
    string s1 = {1}, s2;
    while (j < n)
    {
        int i = 0;
        char digit = s1[0], count = 0; //digit already converted here. So we have nothing to do with it.
        while (s1[i] != '\0')
        {
            if (digit == (s1[i]))
            {
                count++;
                i++;
            }
            else
            {

                s2 += to_string(count);
                s2 += digit;
                //  s2.push_back(count + '0');  converting count from int to string via adding '0'
                // s2.push_back(digit + '0');
                cout << "Inner loop , count : " << count << endl;
                cout << "Inner loop , digit : " << digit << endl;
                digit = int(s1[i]);
                count = 0;
            }
        }
        s2 += to_string(count);
        s2.push_back(digit);
        // s2.push_back(count + '0');
        // s2.push_back(digit + '0');

        cout << "count : " << count << endl;
        cout << "digit : " << digit << endl;
        s1 = s2;
        cout << "s1 : " << s1 << endl;
        cout << "s2 : " << s2 << endl;
        s2.clear();
        j++;
    }
    cout << s1 << endl;
}