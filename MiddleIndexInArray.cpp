#include<bits/stdc++.h>
using namespace std;

main(){
    vector<int> nums ={2,3,-1,8,4};
    long long int sum  =0;
        for(auto i : nums){
            sum += i;
        }
        // cout<<sum <<"  ";
        int i =0;
        long long int currSum =0;
        
        while(i<nums.size()){
            long long int temp = (sum - nums[i] );
            cout<<temp<<"  temp ";
            if(currSum == temp/2 && temp%2==0){
                cout<<i<<endl ;
                break;
            }
            currSum+= nums[i];
            i++;
            cout<<i<<"  ";
        }
        // if(currSum = ((sum -nums[i])/2) && (sum -nums[i])%2==0)cout<<i;
        cout<<i<<endl;
}