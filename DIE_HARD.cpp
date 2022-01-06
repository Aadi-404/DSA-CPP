#include <bits/stdc++.h>
using namespace std; 
main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h,a;
        cin>>h>>a;
        int stime = 0;
        while(h>0 && a>0){
            if(!(stime & 1)){           // Air case
                h += 3;
                a += 2;
            }
            else
            {                          // Water case
                if(a>10){
                    h -= 5 ;
                    a -=10;
                }
                else{                   // Fire case
                    h -= 20 ;
                    a += 5;
                }
            }
            if (a>0 && h>0)
            {
                stime++;
            }
            
            
        }
        cout<<stime<<endl;


    }
}