class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            
       vector<vector<int>> res;
       sort(nums.begin(), nums.end());
int n=nums.size();
for(int i=0; i<n; i++){
int a=nums[i];
int t=-a;
int l=i+1;
int h=n-1;

while(l<h){
    if(nums[l]+nums[h]==t){
        res.push_back({nums[i],nums[l],nums[h]});
        while(l<h && nums[l]==nums[l+1]) l++;
        while(l<h && nums[h]==nums[h-1]) h--;
        l++;
        h--;
    }
    else if(nums[l]+nums[h] < t){
        l++;
    }
    else{
        h--;
    }
}
while(i+1<n && nums[i]==nums[i+1]) i++;
      
}      
       return res;
    }
};
