#include <stdio.h>
#include <iostream>
using namespace std;

int main(void) {
	int withdraw;
    float remain,initial ;
	cin >> withdraw>>initial;
	remain = initial;
	if(withdraw%5==0 && initial >withdraw)
	{
	   remain = initial-withdraw - 0.5;
	}
	printf("%0.2f",remain);
	return 0;
}

