class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
    int n=nums.size();
    int maxi= 0;
    int mini= 0;
    int sumP= 0;
    int sumN= 0;
    int i=0;

    while(i<n){
        sumP= max(nums[i],sumP+nums[i]);
        sumN= min(nums[i],sumN+nums[i]);
        maxi= max(maxi, sumP);
        mini= min(mini, sumN);
        i++;
    }
    return max(abs(mini),maxi);
    // return max(abs(sumN),sumP);
    }
};