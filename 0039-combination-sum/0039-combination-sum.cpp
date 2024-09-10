class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> inside;
    solve(candidates, inside, ans, target, 0);
    return ans;    
    }

    void solve(const vector<int>& nums, vector<int> inside, vector<vector<int>>& ans, int target, int start){
        if(target<0){
            return;
        }
        if(target==0){
            ans.push_back(inside); 
            return;
        }
        for(int i=start;i< nums.size();i++){
            inside.push_back(nums[i]);
            solve(nums,inside,ans,target-nums[i],i);
            inside.pop_back();
        }    
    }
};