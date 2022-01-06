#include <bits/stdc++.h>
using namespace std;

int solve(string &s, string curr, set<string> &set, int i)
{
    if (i >= s.size())
    {
        set.insert(curr);
        return set.size();
    }

    solve(s, curr + char(stoi(s.substr(i, 1)) + 'A' - 1), set, i + 1);
    if (i + 1 < s.length() and stoi(s.substr(i, 2)) <= 26)
        solve(s, curr + char(stoi(s.substr(i, 2)) + 'A' - 1), set, i + 2);

    return set.size();
}
main()
{
    string s;
    s = "1123";
    set<string> set;
    string temp = "";
    cout << solve(s, temp, set, 0) << endl;
    ;
    for (auto i : set)
    {
        cout << i << endl;
    }
}
