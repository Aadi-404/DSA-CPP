// infix to prefix
// and the evaluation of prefix
#include <bits/stdc++.h>
using namespace std;

int correctBraces(string &exp)
{
    for (int i = 0; i < exp.length(); i++)
    {
        if (exp[i] == '(')
        {
            exp[i] = ')';
        }
        else if (exp[i] == ')')
        {
            exp[i] = '(';
        }
        else
        {
        }
    }
    return 0;
}
int prec(char a)
{
    if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '^')
    {
        return 3;
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

int evaluate(string &exp)
{
    stack<int> ev;
    for (int i = exp.length()- 1; i >= 0; i--)
    {
        if (exp[i] == '*' || exp[i] == '+' || exp[i] == '/' || exp[i] == '-' || exp[i] == '^')
        {
            int op1 = ev.top();
            ev.pop();
            int op2 = ev.top();
            ev.pop();
            switch (exp[i])
            {
            case '+':
                ev.push(op1 + op2);
                break;
            case '-':
                ev.push(op1 - op2);
                break;
            case '*':
                ev.push(op1 * op2);
                break;
            case '/':
                ev.push(op1 / op2);
                break;
            case '^':
                ev.push(op1 ^ op2);
                break;

            default:
                break;
            }
        }
        else
        {
            ev.push(exp[i] - '0');
        }
        cout << "on top of stack : " << ev.top() << endl;
    }
    cout << ev.top() << endl;
}

int InfixToPrefix(string &exp)
{
    stack<char> st;
    string res;
    for (int i = 0; i < exp.length(); i++)
    {

        if (exp[i] == '*' || exp[i] == '+' || exp[i] == '/' || exp[i] == '-' || exp[i] == '^')
        {
            while (!st.empty() && (prec(st.top()) > prec(exp[i])))
            {
                res += st.top();
                st.pop();
            }
            st.push(exp[i]);
        }
        else if (exp[i] == '(' || exp[i] == ')')
        {
            if (exp[i] == '(')
            {
                st.push('(');
            }
            else
            {
                while (!st.empty() && !(st.top() == '('))
                {
                    res += st.top();
                    st.pop();
                }
                st.pop();
            }
        }
        else
        {
            res += exp[i];
        }
    }
    while (!st.empty())
    {
        res += st.top();
        st.pop();
    }

    reverse(res.begin(), res.end());
    cout << res << endl;
    evaluate(res);
    return 0;
}

main()
{
    string exp = "A-B/(C*D^E)";

    reverse(exp.begin(), exp.end());

    correctBraces(exp);

    InfixToPrefix(exp);
}