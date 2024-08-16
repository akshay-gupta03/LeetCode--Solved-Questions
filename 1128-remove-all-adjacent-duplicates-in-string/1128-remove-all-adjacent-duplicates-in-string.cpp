class Solution {
public:
    string removeDuplicates(string s) {
    string ans="";
    for(char i: s){
        if(ans.empty()){
            ans.push_back(i);
        }
        else if(ans.back()==i){
            ans.pop_back();
        }
        else{
            ans.push_back(i);
        }
    }
    return ans;
    }
};