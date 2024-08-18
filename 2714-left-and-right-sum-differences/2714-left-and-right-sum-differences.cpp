class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
    vector<int> ans;
    int left=0;
    int right= 0;
    int temp= 0;
    for(auto x:nums){
         right+=x;
    }

    for(int i=0;i<nums.size();i++){
        right-=nums[i];
        temp=abs(left-right);
        ans.push_back(temp);
        left+=nums[i];
    }
    return ans;    
    }
};