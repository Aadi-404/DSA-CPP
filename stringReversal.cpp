// string  reversal using stack.



#include <bits/stdc++.h>
using namespace std;

main()
{
    stack<string> st;
    string before;
    getline(cin, before);
    for (int i = 0; i < before.length(); i++)
    {
        string word = "";
        while (before[i] != ' '&& i < before.length())
        {
            word += before[i];
            i++;
        }
        st.push(word);
    
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}