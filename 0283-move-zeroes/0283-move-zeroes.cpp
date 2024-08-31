class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int i=0;
    int j=0;
    int n=nums.size();
    while(i<n){
        if(nums[i]!=0){
            int change=nums[i];
            nums[i]=nums[j];
            nums[j]=change;
            j++;
        }
        i++;   
    }  
    }
};