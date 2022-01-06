#include <bits/stdc++.h>

#define FAST                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d", &num)
#define sff(num1, num2) scanf("%d %d", &num1, &num2)
#define sfff(num1, num2, num3) scanf("%d %d %d", &num1, &num2, &num3);
#define sl(num) scanf("%lld", &num)
#define sll(num1, num2) scanf("%lld %lld", &num1, &num2)
#define slll(num1, num2, num3) scanf("%lld %lld %lld", &num1, &num2, &num3);
#define rep(i, n) for (i = 1; i <= n; i++)
#define rep0(i, n) for (i = 0; i < n; i++)
#define reps(i, a, n) for (i = a; i <= n; i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara, n) memset(ara, n, sizeof(ara))
#define memb(ara) memset(ara, false, sizeof(ara))
#define all(x) (x).begin(), (x).end()
#define pi pair<int, int>
#define pii pair<pair<int, int>, pair<int, int>>
#define db(x) cout << #x << " :: " << x << "\n";
#define dbb(x, y) cout << #x << " :: " << x << "\t" << #y << " :: " << y << "\n";
#define fr freopen("input.txt", "r", stdin);
#define fw freopen("output.txt", "w", stdout);
#define TIME cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
typedef long long int ll;
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first >> v[i].second;
    }
    // for(int i=0;i<n;i++){
    //     cout<<v[i].first<<' '<<v[i].second<<endl;
    // }
    // first can open second
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int to_search = v[i].first;
        // cout<<i<<endl;
        // bool found = 0;
        int j;
        for (j = 0; j < n; j++)
        {
            // cout<<i<<" i : j -> "<<j<<" srch : "<<to_search <<endl;
            // cout<<"at J"<<endl;
            if (v[j].second == to_search and i != j)
            {
                // cout<<"break"<<endl;
                break;
            }
        }
        // cout<<j<<endl;
        if (j == n)
        {
            // cout << "here" << endl;
            count++;
        }
    }
    // unordered_set<int> s;
    // unordered_map<int, int> m;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i].first;
    //     cin >> v[i].second;
    //     m[v[i].first]++;
    //     s.insert(v[i].first);
    // }
    // for (auto &i : v)
    // {
    //     if (i.first != i.second)
    //     {
    //         s.erase(i.second);
    //     }
    //     else
    //     {
    //         if (m[i.first] > 1)
    //             m[i.first] = 0;
    //     }
    // }
    // int count = 0;
    // for (auto &i : s)
    // {
    //     count += m[i];
    // }
    cout << count << endl;
}