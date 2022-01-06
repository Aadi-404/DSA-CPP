#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int a[6] = {1, 2, 3, 4, 5, 6};
    int size = *(&a+ 1)- a;
    for (int i = 0; i < size/2; i++)
    {
        int temp;
        temp = a[size-i-1];
        a[size-i-1]= a[i];
        a[i] = temp;
    }
    for (int i = 0; i < size; i++)
    {
    cout<<a[i]<<endl;
    }
    
    
    return 0;
}
