class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> inner;
    int n=nums.size();
    generate(nums,0,inner,ans,n);
    return ans;
    }

    void generate(const vector<int>& nums,int start, vector<int>& inner, vector<vector<int>>& ans, int end){
    ans.push_back(inner);
    for(int i=start;i<end;i++){
        inner.push_back(nums[i]);
        generate(nums,i+1,inner,ans,end);
        inner.pop_back();
    }  
    }    
};