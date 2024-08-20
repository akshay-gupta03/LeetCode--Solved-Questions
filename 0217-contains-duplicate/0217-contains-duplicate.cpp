class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
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