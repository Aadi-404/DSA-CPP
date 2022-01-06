#include <bits/stdc++.h>

#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define pf printf
#define sc scanf
#define sf(num) scanf("%d",&num)
#define sff(num1,num2) scanf("%d %d",&num1,&num2)
#define sfff(num1,num2,num3) scanf("%d %d %d",&num1,&num2,&num3);
#define sl(num) scanf("%lld",&num)
#define sll(num1,num2) scanf("%lld %lld",&num1,&num2)
#define slll(num1,num2,num3) scanf("%lld %lld %lld",&num1,&num2,&num3);
#define rep(i,n) for(i=1;i<=n;i++)
#define rep0(i,n) for(i=0;i<n;i++)
#define reps(i,a,n) for(i=a;i<=n;i++)
#define pb push_back
#define mpp make_pair
#define MOD 1000000007
#define fi first
#define se second
#define N 100005
#define mem(ara,n) memset(ara,n,sizeof(ara))
#define memb(ara) memset(ara,false,sizeof(ara))
#define all(x) (x).begin(),(x).end()
#define pi pair<int,int>
#define pii pair<pair<int,int>,pair<int,int> >
#define db(x) cout<<#x<<" :: "<<x<<"\n";
#define dbb(x,y) cout<<#x<<" :: "<<x<<"\t"<<#y<<" :: "<<y<<"\n";
#define fr freopen("input.txt","r",stdin);
#define fw freopen("output.txt","w",stdout);
#define TIME cerr<<"Time : "<<(double)clock()/(double)CLOCKS_PER_SEC<<"s\n";
typedef long long int ll;
using namespace std;
void solve(){
    unordered_map<char,int> mp;
    string s = "";
    string input = "";
    // getline(cin,s);
    cin>>s;
    // cout<<s<<endl;
    for(int i =0;i<26;i++){
        // cin>>s[i];
        mp[s[i]] = i;
        // cout<<s[i]<<" : "<<mp[s[i]]<<endl;
        // cout<<mp[s[i]]<<endl;
    }
    // cout<<mp['c']<<endl;
    // cout<<s<<endl;

    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // getline(cin,input);
    cin>>input;
    // input = s;
    // cout<<mp['h']<<endl;
    long long sum =0;
    // cout<<input[0]<<endl;
    int cur = mp[input[0]];
    // cout<<"cur : "<<cur<<endl;
    // string input;
    // cout<<input<<endl;
    for(int i = 0;i<input.size();i++){
        sum += abs(mp[input[i]] - cur);
        // cout<<sum <<endl;
        cur = mp[input[i]];
    }
    cout<<sum <<endl;
}
int main()
{
  //  FAST;
    int t,tc;
    cin>>tc;
    rep(t,tc)
    {
        solve();
    }
}