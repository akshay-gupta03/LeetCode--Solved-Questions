class Solution {
public:
    string clearDigits(string s) {
    vector<char> ans; 
    for(char c:s) {
        if(isdigit(c)){
            if(ans.empty()!=true){
                ans.pop_back();
            }
        } 
        else{
            ans.push_back(c);
        }
    }
    return string(ans.begin(),ans.end());  
    }
};