#include<bits/stdc++.h>
using namespace std;
int carAssembly ( int a[][4],int t[][4], int *e,int *x ){
    // cout<<*e<<"  "<<*(e+1)<<"  entry"<<endl;
    int first = *e + a[0][0];
    int second = *(e+1) + a[1][0];
    for(int i =1 ;i<4;i++){
        int up  = min(first, (second + t[1][i])) + a[0][i];
        int down = min(second,(first + t[0][i]) ) + a[1][i];
		first = up;
		second = down;
    }
    first += *x;
    second += *(x + 1);
    return min(first,second);
}
main(){
    int a[][4] = { { 4, 5, 3, 2 },      // time on the station j on line i---->>> a i j 
                   { 2, 10, 1, 4 } };
    int t[][4] = { { 0, 7, 4, 5 }, // t i j ->> i on first line to j on the second line
                   { 0, 9, 2, 8 } };
    int e[] = { 10, 12 }, x[] = { 18, 7 };
 
    cout << carAssembly(a, t, e, x);
 
    return 0;
}