#include <bits/stdc++.h>
using namespace std;

int prec(char a)
{
    if (a == '^')
    {
        return 3;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixToPostfix(string &s)
{
    stack<char> st;
    string o;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == '*' || s[i] == '/' || s[i] == '-' || s[i] == '+' || s[i] == '^')
        {
            while (!st.empty() && prec(st.top()) > prec(s[i]))
            {
                o += st.top();
                st.pop();
            }
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while (!st.empty() && !(st.top() == '('))
            {
                o += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            o += s[i];
        }
    }
    while (!st.empty())
    {
        o += st.top();
        st.pop();
    }
    return o;
}
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        cin.clear();
        fflush(stdin);
        
        string infix;
        getline(cin, infix);
        cout << infixToPostfix(infix) << endl;
    }
}