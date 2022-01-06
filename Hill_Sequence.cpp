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
void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    int a[n];
    int mx = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        
        mx = max(mx, a[i]);
    }
    if (m[mx] > 1)
    {
        cout << "-1" << endl;
        return;
    }
    vector<int> v1, v2;
    for (auto &i : m)
    {
        if (i.second > 2)
        {
            cout << "-1" << endl;
            return;
        }
        if (i.second == 1)
        {
            // cout<<i.first<<"   "<<i.second <<"   ";
            v2.emplace_back(i.first);
            // i.second--;
        }
        else {
            v2.emplace_back(i.first);
            v1.emplace_back(i.first);
        }
    }
    // first.shrink_to_fit();
    // vector<int>::iterator p;
    // p = first.end();
    // cout<<*p;

    reverse(v2.begin(), v2.end());
    // reverse(first.begin(), first.end());
    for (auto i : v1)
    {
        // cout << i.first << " -> "<<i.second<<"     ,    ";
        cout << i << " ";
    }
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << endl;
}
int main()
{
    //  FAST;
    int t, tc;
    cin >> tc;
    rep(t, tc)
    {
        solve();
    }
}