#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    double sum = 0;
    cin >> n;
    int arr[n];
    int nos[1000];
    int m=0;
    memset(nos,0,sizeof(nos));
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        nos[arr[i]-1]++;
        m = max(m,arr[i]);
        
    }

    for (int i = 0; i < m ; i++)
    {
        if (nos[i]!=-1)
        {
        sum += ceil((double)nos[i] / 2);
        }
            
        
    }
    cout << sum;
}