class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> inner;
    answer(ans,inner,nums);
    return ans;
    }

    void answer(vector<vector<int>>& ans, vector<int>& inner, const vector<int>& nums) {
        if(inner.size()==nums.size()) {
            ans.push_back(inner);
            return;
        }
        for(int i=0;i<nums.size();i++) {
            if(count(inner.begin(),inner.end(),nums[i])==1){
                continue;
            }
            inner.push_back(nums[i]);
            answer(ans,inner,nums);
            inner.pop_back();
        }
    }
};