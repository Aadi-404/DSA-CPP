#include<iostream>
#include<string>
#include<limits>
using namespace std;

main ()
{
    int t;
    cin>>t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (t--)
    {
        string str1;
        getline(cin,str1);
        string str2 = "pawri";
        int l=0;
        while(l != string::npos)
        {
            l = str1.find("party",l);
            if(l != string::npos)
                str1.replace(l,5,str2);
            else
                break;
            
            l+=1;

        }
        cout<<str1<<endl;
        
    }
    
}