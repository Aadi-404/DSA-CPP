#include <bits/stdc++.h>
using namespace std;
main()
{
    queue<pair<int, int>> q;
    pair<int, int> p;
    q.push({4, 6});
    q.push({4, 5});
    q.push({6, 5});
    q.push({7, 3});
    int index = 0;
    int sum = 0;
    int diff = 0;
    for (int i = 0; i < q.size(); i++)
    {
        sum = sum + (q.front().first-q.front().second);
        if (sum <0)
        {
            index++;
            q.push({q.front().first,q.front().second});
            q.pop();
            diff += (q.front().first-q.front().second);
            sum = 0;
        }
        
        
    }
    if (sum + diff >= 0)
    {
        cout<<index<<endl;
    }
    else
    {
        cout<<-1<<endl;
    }
    
    
    
}
