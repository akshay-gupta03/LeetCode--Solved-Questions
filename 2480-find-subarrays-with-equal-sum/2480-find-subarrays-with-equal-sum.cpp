class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
    int n=nums.size();
    unordered_map<int,int> count;
    int sum=0;
    for(int i=1;i<n;i++){
        sum=nums[i]+nums[i-1];
        count[sum]++;
        if(count[sum]>1){
            return true;
        }
    } 
    return false;   
    }
};