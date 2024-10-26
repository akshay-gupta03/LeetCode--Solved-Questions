class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
    // int n=nums.size();
    // sort(nums.begin(),nums.end());    
    // return nums[n-k];   
    priority_queue<int> ans;
    int n=nums.size();
    for(int i=0;i<n;i++){
        ans.push(nums[i]);
    }
    int value=n-k+1;
    while(ans.size()!=value){
        ans.pop();
    }
    return ans.top();
    }
};