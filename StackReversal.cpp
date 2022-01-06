// stack reversal without using extra space 
// Two recursion used , 1st one for transversal and getting the right element 
// 2nd one for putting the element at the last of stack 


#include <bits/stdc++.h>
using namespace std;

int pushAtLast(stack<int> &st, int k)
{
    if (st.empty())
    {
        st.push(k);
        return 0;
    }

    int temp = st.top();
    st.pop();
    pushAtLast(st, k);
    st.push(temp);
    return 0;
}

int reversal(stack<int> &st)
{
    if (st.empty())
    {
        return 0;
    }

    int temp = st.top();
    st.pop();
    reversal(st);
    pushAtLast(st, temp);
    return 0;
}
int printTheStack(stack<int> &st)
{
    while (!st.empty())
    {

        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}

main()
{
    stack<int> st;
    st.push(5);
    st.push(4);
    st.push(3);
    st.push(2);
    st.push(1);
    reversal(st);
    printTheStack(st);
}