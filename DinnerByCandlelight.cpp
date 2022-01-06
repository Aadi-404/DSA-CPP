#include <iostream>
using namespace std;

main ( )
{
    long long int t;
    cin>>t;
    
    while(t--)
    {
        long long int a,y,x,ans=0;
        cin>>a>>y>>x;
        if(a<y){
            ans =1+ (a*x);
            cout<<ans<<endl;
        }
        else
        {
            ans = (x*y);
            cout<<ans<<endl;
        }
        
    }
}