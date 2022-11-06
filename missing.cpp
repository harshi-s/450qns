#include<bits/stdc++.h>
using namespace std;


int missingNumber(vector<int>& nums) {
        int n=nums.size();
    vector<int> ans(n+1, 0);
    int output;
    for(int i=0; i<n; i++){
        ans[nums[i]]++;
    }

    for(int i=0; i<n+1; i++){
    if(ans[i]==0){
        output=i;
        break;
    }
    }
    return output;

    }