#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(vector<pair<long long, int>> a, long long N)
    {
        sort(a.begin(), a.end());
        long long ans = 0;
        for (long long i = 0; i < N; i++)
        {
            if (i > a[i].second)
                ans += (i - a[i].second);
        }
        return ans;
        // Your Code Here
    }
};
int main()
{

    long long T;
    cin >> T;

    while (T--)
    {
        long long N;
        cin >> N;

        vector<pair<long long, int>> A;
        for (int i = 0; i < N; i++)
        {
            long long first;
            cin >> first;
            A.push_back({first, i});
        }
        Solution obj;
        cout << obj.inversionCount(A, N) << endl;
    }

    return 0;
}