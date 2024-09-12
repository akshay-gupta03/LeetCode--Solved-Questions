class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    vector<vector<int>> ans;
    vector<int> inside;
    sort(candidates.begin(),candidates.end());
    solve(candidates, inside, ans, target, 0);
    return ans;    
    }

    void solve(const vector<int>& candidates, vector<int> inside, vector<vector<int>>& ans, int target, int start){
        if(target<0){
            return;
        }
        if(target==0){
            ans.push_back(inside); 
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(i>start && candidates[i]==candidates[i-1]){
                continue;
            }
            if(candidates[i]>target){
                break;
            }
            inside.push_back(candidates[i]);
            solve(candidates,inside,ans,target-candidates[i],i+1);
            inside.pop_back();
        }    
    }
};