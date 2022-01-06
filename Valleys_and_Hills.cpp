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
    int hills, valley;
    cin >> hills >> valley;
    string ans = "";
    if (valley > hills)
    {
        for (int i = 0; i < valley; i++)
        {
            if (i <= hills)
                ans.append("10");
            else
                ans.append("110");
        }
        if (valley - hills > 0)
            ans.append("1");
    }
    else if (hills > valley)
    {
        for (int i = 0; i < hills; i++)
        {
            if (i <= valley)
                ans.append("01");
            else
                ans.append("001");
        }
        if (hills - valley > 0)
            ans.append("0");
    }
    else
    {
        for (int i = 0; i <= hills; i++)
        {
            ans.append("01");
        }
    }
    cout << ans.length() << endl
         << ans << endl;
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