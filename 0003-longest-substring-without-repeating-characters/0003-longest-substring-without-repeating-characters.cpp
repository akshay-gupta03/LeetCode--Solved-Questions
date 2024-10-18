class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_map<char,int> check;
    int i=0;
    int j=0;
    int n=s.size();
    int ans=0;
    while(j<n){
        if(check.find(s[j])!=check.end()){
            i=max(i,check[s[j]] + 1);
        }
        ans=max(ans,j-i+1);
        check[s[j]]=j;
        j++;
    }
    return ans;    
    }
};