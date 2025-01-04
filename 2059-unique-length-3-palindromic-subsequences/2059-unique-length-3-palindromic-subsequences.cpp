class Solution {
public:
    int countPalindromicSubsequence(string s) {
    map<char,vector<int>> map1;
        for(int i=0; i<s.size(); i++){
            map1[s[i]].push_back(i);
        }
        int ans=0;
        for(auto i:map1){
            vector<int> ind=i.second;
            int start=ind[0];
            int end=ind[ind.size()-1];
            if(end-start<=1){
                continue;
            }
            else{
                map<char, int> map2;
                for(int i=start+1; i<end; i++){
                    map2[s[i]]++;
                }
                ans+=map2.size();
            }
        }
        return ans;    
    }
};