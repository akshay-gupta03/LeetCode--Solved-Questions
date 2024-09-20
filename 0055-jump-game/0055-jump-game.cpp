class Solution {
public:
    bool canJump(vector<int>& nums) {
    int jump=0; 
    for(int i=0;i<nums.size();i++){
        if(jump<0){
            return false;
        }
        else if(nums[i]>jump){
            jump=nums[i];
        }
        jump=jump-1;
    }  
    return true;
    }
};