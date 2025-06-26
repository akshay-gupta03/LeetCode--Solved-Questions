class Solution {
public:
    int longestSubsequence(string s, int k) {
    int ans=0;
    long long cur = 0;
    for(int i= s.size()- 1;i >= 0;i--) {
        char c= s[i];
        if(c== '0') {
            ans++;
        } 
        else if(ans < 31 && cur + (1LL << ans) <= k) {
            cur += 1LL << ans;
            ans++;
        }
    }
    return ans;
    }    
};