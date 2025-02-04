class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
    int n=nums.size();
    int ans=nums[0];
    int maxi=nums[0];
    if(n==1){
        return nums[0];
    }
    for(int i=1;i<n;i++){
        if(nums[i-1]<nums[i]){
            maxi+=nums[i];
        }
        else{
            maxi=nums[i];
        }
        ans=max(ans,maxi);
    } 
    return ans;   
    }
};