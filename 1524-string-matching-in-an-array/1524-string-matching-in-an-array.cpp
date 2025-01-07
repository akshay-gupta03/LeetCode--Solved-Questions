class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
    vector<string> ans;
    for(string i:words){
        for(string j:words){
            if(i==j){
                continue;
            }
            if(j.size()<i.size()){
                continue;
            }
            if(j.find(i)!=-1){
                ans.push_back(i);
                break;
            }
        }
    }
    return ans;    
    }
};