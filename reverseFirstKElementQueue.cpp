// Reverse first K element of Queue

#include <bits/stdc++.h>
using namespace std;
main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    int k = 3;
    queue<int> q2;
    stack<int> s;
    while (!q.empty())
    {
        if (k)
        {
            int data = q.front();
            q.pop();
            s.push(data);
            k--;
        }
        else
        {
            int data = q.front();
            q.pop();
            q2.push(data);
        }
    }
    while (!s.empty()){
        int data = s.top();
        s.pop();
        q.push(data);
    }
    while (!q2.empty()){
        int data = q2.front();
        q2.pop();
        q.push(data);
    }
    while (!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
}