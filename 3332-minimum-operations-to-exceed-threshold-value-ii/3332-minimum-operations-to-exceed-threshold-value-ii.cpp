class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
    priority_queue<long long, vector<long long>, greater<long long>> pqueue;
        for (auto& num:nums) {
            pqueue.push(num);
        }

        int ans=0;
        while(pqueue.size() >= 2 && pqueue.top()<k) {
            long long x=pqueue.top();
            pqueue.pop();
            long long y=pqueue.top(); 
            pqueue.pop();
            long long z=x*2+y;
            pqueue.push(z);
            ans++;
        }
        return ans;   
    }
};