#include<iostream> 
#include<string>
using namespace std;

main()
{
    string input,reversed;
    getline(cin,input);
    cout<<input.length()<<endl;
    for (int i = 0; i < input.length(); i++)
    {
        reversed.push_back(input[(input.length()-1)-i]);
    }
    cout<<reversed<<endl;
    
}