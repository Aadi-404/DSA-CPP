#include<iostream>
#include <algorithm>
using namespace std;

main(){
    int k,n;
    cin>>k;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
        cout<<"before 1st sort"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    
    sort(a,a+n);
        cout<<"After 1st sort"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    for (int i = 0; i < n/2; i++)
    {
        a[i] += k;
    }
    for (int i = n-1; i >= n/2; i--)
    {
        a[i] -= k;
        if(a[i]<0)
        {
            a[i] = a[i] + (2*k);
        }
    }
        cout<<"before 1st sort and after changes"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    sort(a,a+n);
        cout<<"After 2nd sort"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<" "<<a[i];
    }
    int diff= a[n-1]-a[0];
    cout<<diff;
    
}