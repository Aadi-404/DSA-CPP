#include<iostream>
#include<fstream>
using namespace std;
main(){
    ofstream f;
    f.open("aditya.txt",ofstream::out|ofstream::app);
    if (f.is_open())    
    {
        cout<<"successfully created and opened"<<endl;
    }
    else
    {
        cout<<"not opened"<<endl;
    }
    
    
    f<<".\nIt's all about creating yourself.";
    f.close();

}
