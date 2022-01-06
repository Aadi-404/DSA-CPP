#include <bits/stdc++.h>
using namespace std;
bool time(int mid, int *a, int p, int c)
{
    int prata =0;
    for (int i = 0; i < c; i++)
    {
        int count =1;
        int r = 0;
        while((r + a[i]* count)<= mid){
            r+= a[i]* count;
            count ++;
        }
        prata += (count -1);
    }
    if(prata>=p)return true;
    else return false;
    
}

main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, c;
        cin >> p >> c;
        int a[c];
        sort(a, a + c);
        for (int i = 0; i < c; i++)
        {
            cin >> a[i];
        }
        int m = 0;
        int h = INT_MAX;
        int ans ;
        while (m <= h)
        {
            int mid = (m + h) >> 1;
            if (time(mid, a, p, c))
            {
                ans = mid;
                h = mid -1;
            }
            else m = mid + 1;
        }
        cout<<ans<<endl;
    }
}