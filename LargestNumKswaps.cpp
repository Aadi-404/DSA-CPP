#include <bits/stdc++.h>
using namespace std;
void solve(string &s, int k, int idx, string &max)
{
    if (k == 0)
        return;
    // cout<<"Index after calling : "<<idx<<endl;
    for (int i = 1; i < s.length(); i++)
    {
        if ((idx + i) == s.length())
            break;
        if (s[idx] < s[idx + i])
        {
            swap(s[idx], s[idx + i]);
            if (s.compare(max) > 0)
            {
                max = s;
                // cout<<max<<endl;
            }
            // cout<<"At calling : "<<idx<<endl;
            solve(s, k - 1, idx + 1, max);
            swap(s[idx], s[idx + i]);
        }
    }
    if((idx+1)<s.length())solve(s, k, idx + 1, max);
}
//Function to find the largest number after k swaps.
string findMaximumNum(string str, int k)
{
    string max = str;
    // cout<<str[0]<<endl;
    int swaps = 1;
    // cout << str << endl;
    // cout << max << endl;
    solve(str, k, 0, max);
    return max;
    // code here.
}
main()
{
    int t, k;
    string str;

    // cin >> t;
    t = 1;
    while (t--)
    {
        cin >> k >> str;
        // k = 3;
        // str = "4551711527";
        cout << findMaximumNum(str, k) << endl;
    }
    return 0;
}