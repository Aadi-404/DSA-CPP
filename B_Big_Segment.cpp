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
    //  FAST;
    int n;
    cin >> n;
    vector<pair<int, int>> inter;

    pair<int, int> last;
    int ans = -1;
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        inter.push_back({x, y});

        int new_size = inter[i].second - inter[i].first;
        if (new_size > size and (last.first >= inter[i].first || last.second <= inter[i].second))
        {
            last = inter[i];
            ans = i;
            size = new_size;
        }
    }
    // pair<int, int> last = inter[0];
    // int ans = 0;
    // int size = last.second - last.first;
    // for (int i = 1; i < n; i++)
    // {
    //     int new_size = inter[i].second - inter[i].first;
    //     if (new_size > size and (last.first >= inter[i].first || last.second <= inter[i].second))
    //     {
    //         last = inter[i];
    //         ans = i;
    //         size = new_size;
    //     }

    //     // cout << last.first << "  " << last.second << endl;
    //     // cout<<size<<endl;
    // }
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if(n==1){
            ans = 0;
            break;
        }
        if (last.first <= inter[i].first and last.second >= inter[i].second)
        {
            continue;
        }
        else
        {
            flag = 0;
            break;
        }
    }
    if (flag)
        cout << ans + 1 << endl;
    else
        cout << "-1" << endl;
}