#include <bits/stdc++.h>
using namespace std; 
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int d;
        vector<int> v(3,0);
        for(int i =0;i<3;i++)cin>>v[i];
        cin>>d;
        int count =1;
        int dup=d;
        int i =0;
        while(i<3){
            if((dup-v[i])<0){
                count ++;
                dup = d;
            }
            dup = dup - v[i];
            i++;
        }
        cout<<count<<endl;

    }
}