class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
    int n=nums.size();
    vector<int> ans(n);
    for(int i: nums){
        int temp=nums[i];
        ans[i]=nums[temp];
    }
    return ans;
    }
};