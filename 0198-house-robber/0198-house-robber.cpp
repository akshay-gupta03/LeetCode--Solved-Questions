class Solution {
public:
    int rob(vector<int>& nums) {
    int prev=nums[0];
    int next=0;
    for(int i=1;i<nums.size();i++){
        int current=max(prev,nums[i]+next);
        next=prev;
        prev=current;
    }
    return prev;
    }
};