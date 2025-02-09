class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
    unordered_map<int,int> freq;
    long long ans=0;
    long long n=nums.size();
    for(int i=0;i<n;i++){
        nums[i]=i-nums[i];
        freq[nums[i]]++;
    }
    for(int i=0;i<n;i++){
        freq[nums[i]]--;
        ans+=(n-i-1-freq[nums[i]]);
    }
    return ans;     
    }
};