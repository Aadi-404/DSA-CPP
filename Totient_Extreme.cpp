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
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
void solve()
{
    int n;
    cin >> n;
    vector<ll> gcdN;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        ll numb = 0;
        for (int j = 1; j <= i; j++)
        {
            if (gcd(i, j) == 1)
                numb++;
        }
        gcdN.push_back(numb);
        sum += numb;
    }
    // for(auto i : gcdN)
    // cout<<i<<" ";
    ll H = sum * sum;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         H = H + gcdN[i - 1] * gcdN[j - 1];
    //     }
    // }
    cout << H << endl;
    return;
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