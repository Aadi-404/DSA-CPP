#include <bits/stdc++.h>
using namespace std;
int search(int a[], int n, int x)
{
    int l = 0;
    int h = n - 1;
    int ans = -1;
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (a[mid] == x)
            return mid;
        else if (a[mid] >= a[l])
        {
            if (x <= a[mid] && x >= a[l])
                h = mid;
            else
                l = mid + 1;
        }
        else
        {
            if (x >= a[mid] && x <= a[h])
                l = mid + 1;
            else
                h = mid;
        }
    }
    return ans;
}
main()
{
    int a[] = {3, 4, 5, 6, 7, 8, 1, 2};
    int size = sizeof(a) / sizeof(int);
    int ans = search(a,size,3);
    cout<<"Position of Ans in array : "<<ans<<endl;
}