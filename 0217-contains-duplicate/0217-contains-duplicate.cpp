class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    // int ans[10];
    // for(int i:nums){
    //     ans[i]++;
    //     if(ans[i]>1){
    //         return true;
    //     }
    // } 

    set<int> ans;
    for(int i: nums){
        ans.insert(i);
    }
    if(nums.size()!=ans.size()){
        return true;
    }
    return false;  
    }
};