class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
    int i= 0;
    int j= 0;
    int n= nums.size();
    int k= 0;
    vector<string> ans;
    while(i<n){
        k = i;
        j = i+1;
        while(j<n && nums[j]==nums[i]+1){
            i++;j++;
        }
        if(i==k){
            ans.push_back(to_string(nums[i]));
            i++;
        }
        else{
            ans.push_back(to_string(nums[k])+"->"+to_string(nums[i]));
            i=j;
        }
    }
    return ans;    
    }
};