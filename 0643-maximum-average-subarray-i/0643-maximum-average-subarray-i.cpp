class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
    int max=0;
    for(int i=0;i<k;i++){
        max+=nums[i];
    }
    int maxloc=max;
    for(int i=k;i<nums.size();i++){
        max=max-nums[i-k]+nums[i];
        if(max>maxloc){
            maxloc=max;
        }
    }  
    return (double)maxloc/k; 
    }
};