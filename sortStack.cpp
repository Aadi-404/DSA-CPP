#include <bits/stdc++.h>
using namespace std;


void correctPlace(stack<int> &st, int data)
{
    if (st.empty())
    {
        st.push(data);
    }

    else if (st.top() <= data)
    {
        st.push(data);
    }
    else
    {
        int temp = st.top();
        st.pop();
        correctPlace(st, data);
        st.push(temp);
    }
}



void print(stack<int> &st)
{
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
}
void sortStack(stack<int> &st, int data)
{
    if (st.empty())
    {
        return;
    }
    data = st.top();
    st.pop();
    sortStack(st, data);
    correctPlace(st, data);
}

main()
{
    stack<int> st;
    st.push(9);
    st.push(2);
    st.push(6);
    st.push(4);
    st.push(3);
    sortStack(st, st.top());
    print(st);
}