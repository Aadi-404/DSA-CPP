

//       Maximum Difference between two different letters 
//       aabaacaa   here ans =5
//       working in small constraints 

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

main()
{
    string s;
    cin >> s;
    int diff;
    
    int ans=0;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0;  j< s.length(); j++)
        {
            if (s[i] != s[j])
            {
                ans=max(ans,abs(i-j));
            }

        }
    }
    cout<<ans;
}
