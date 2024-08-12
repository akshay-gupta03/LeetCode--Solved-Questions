class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
    int j=n;
    int i=0;
    vector<int>ans;
    int cnt=0;
    while(i!=n){
            ans.push_back(nums[i]);
             i++;
            ans.push_back(nums[j]);
            j++;
    }
    return ans;
    }
};