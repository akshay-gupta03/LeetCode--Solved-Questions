class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> pq; 
    for(int& num:nums){
        pq.push(num);
        if(pq.size()>k)
            pq.pop();
    }
    unordered_map<int,int> unordered;
    vector<int> ans;
    while(!pq.empty()){
        unordered[pq.top()]++;
        pq.pop();
    }
    for(int& num:nums){
        if(unordered.find(num)!=unordered.end() && unordered[num]-->0)
            ans.push_back(num);
    }
    
    return ans;  
    }
};