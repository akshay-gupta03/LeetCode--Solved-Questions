class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product=1;
        int zeroCnt=0;
        for(int i=0;i<nums.size();i++){
            if (nums[i]==0){
                zeroCnt++;
                continue;
            }
            product*=nums[i];
        }

        for (int i=0;i<nums.size();i++){
            if(zeroCnt>1) {
                nums[i] = 0;
            } 
            else if(zeroCnt==1){
                if(nums[i]==0){
                    nums[i]=product;
                }
                else{
                    nums[i]=0;
                }
            } 
            else{
                nums[i]=product/nums[i];
            }
        }
        return nums;
    }
};
