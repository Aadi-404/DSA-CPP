// codechef starter 10
#include <bits/stdc++.h>
using namespace std;
main()
{
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     int a , b, c;
    //     cin>>a>>b>>c;
    //     if(a>b){
    //         if(b>c) cout<<"Alice"<<endl;
    //         else cout<<"Bob"<<endl;
    //     }
    //     else{
    //         if(a>c)cout<<"Alice"<<endl;
    //         else cout<<"Draw"<<endl;
    //     }
    // }
    int t;
    cin >> t;
    while (t--)
    {
        int Sa, Sb, Sc;
        cin >> Sa >> Sb>>Sc;
        if (Sc > Sb)
        {
            if (Sb > Sa)
            {                           //Sc>Sb && Sb>sa //Sc>Sb>Sa
                cout << "Draw" << endl; //Sa is the smallest
            }
            else
            {
                cout << "Bob" << endl; //Sc>Sb && Sa>Sb //Sb is the smallest
            }
        }
        else
        {
            if (Sc < Sa)
            {
                cout << "Alice" << endl; //Sc<Sb && Sc<Sa //Sc is the smallest
            }
            else
            {
                cout << "Draw" << endl; //Sc<Sb && Sc>Sa //Sa is the smallest
            }
        }
    }
}