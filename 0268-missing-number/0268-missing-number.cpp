class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n=nums.size(),i=0,total=(n*(n+1))/2;
    while(i<n){
        total-=nums[i];
        i++;
    }
    return total;   
    }
};