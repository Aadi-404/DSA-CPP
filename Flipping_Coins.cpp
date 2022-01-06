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
void build()
{
}

int update(vector<int> &tree, int idx, int s, int e, int qs, int qe)
{
    if (qs > e || qe < s)
        return tree[idx];
    if (s == e)
    {
        tree[idx] = 1 - tree[idx];
        return tree[idx];
    }
    int mid = (s + e) / 2;
    int left = update(tree, 2 * idx + 1, s, mid, qs, qe);
    int right = update(tree, 2 * idx + 2, mid + 1, e, qs, qe);
    tree[idx] = left + right;
    return tree[idx];
}

int query(vector<int> &tree, int idx, int s, int e, int qs, int qe)
{
    if (qs > e || qe < s)
        return 0;
    if (s == e)
    {
        return tree[idx];
    }

    if (qs == s and qe == e)
        return tree[idx];

    int mid = (s + e) / 2;
    int left = query(tree, 2 * idx + 1, s, mid, qs, qe);
    int right = query(tree, 2 * idx + 2, mid + 1, e, qs, qe);
    int ans = left + right;
    return ans;
}

void solve()
{
    int n, q;
    cin >> n >> q;
    vector<int> tree(4 * n, 0);
    while (q--)
    {
        int temp, qs, qe;
        cin >> temp >> qs >> qe;
        if (temp)
        { // count no of heads in this range
            int ans = query(tree, 0, 0, n - 1, qs, qe);
            cout << ans << endl;
        }
        else
        { // flip all coins in this range
            int temp = update(tree, 0, 0, n - 1, qs, qe);
        }
    }
    // for(auto i: tree){
    //     cout<<i<<"  ";
    // }
}
int main()
{
    FAST;
    int t, tc;
    // cin>>tc;
    tc = 1;
    rep(t, tc)
    {
        solve();
    }
}