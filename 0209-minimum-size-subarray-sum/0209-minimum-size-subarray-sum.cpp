class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
    int i=0; 
    int j=0;
    int ans=INT_MAX;
    int area=0;
    for (int i=0;i<nums.size();i++){
        area+=nums[i];
        while(area>=target){
            ans=min(ans,i-j+1);
            area-=nums[j];
            j++;
        }
    }
    if(ans==INT_MAX){
        return 0;
    }
    return ans;    
    }
};