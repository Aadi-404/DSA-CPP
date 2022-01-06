#include <bits/stdc++.h>
using namespace std;

void inorder(vector<int> &v, int a[], int n, int index)
{
    if (index >= n)
    {
        return;
    }
    inorder(v, a, n, 2 * index + 1);
    v.push_back(a[index]);
    inorder(v, a, n, 2 * index + 2);
}
int solve(vector<int> &v)
{
    vector<pair<int, int>> v2;
    int ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        v2.push_back({v[i],i});
    }
    sort(v2.begin(),v2.end());
    
    for (int i = 0; i < v.size(); i++)
    {
        if (v2[i].second==i)continue;
        else
        {
            swap(v2[i].first,v2[v2[i].second].first);
            swap(v2[i].second,v2[v2[i].second].second);
            ans++;
        }
    }
    
    return ans;
}

main()
{
    int a[] = {5, 6, 7, 8, 9, 10, 11};
    int n = sizeof(a) / sizeof(int);
    vector<int> v;
    inorder(v, a, n, 0);
    int ans = solve (v);
    cout<<ans<<endl;

}