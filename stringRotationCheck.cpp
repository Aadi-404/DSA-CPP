#include <iostream>
#include <string>
using namespace std;

main()

{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    cout<<"s1 : "<<s1<<endl;
    cout<<"s2 : "<<s2<<endl;


    int found = 0;
    int d = 0;
    int repeat = 0;
    int flag = 1;

    found = s1.find(s2[0]);

    for (int i = 0; i < s2.length(); i++)
    {
        if (s1[found + -d + i] == '\0')
        {
            d = found - d + i;
            repeat++;
        }
        if (s1[found - d + i] != s2[i])
        {
            flag = 0;
            break;
        }
    }
    cout<<flag<<endl;
}