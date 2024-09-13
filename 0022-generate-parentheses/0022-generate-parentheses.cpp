class Solution {
public:
    vector<string> generateParenthesis(int n) {
    vector<string> ans;
    answer(n,n,"",ans);
    return ans;
    }

    void answer(int open,int close,string s,vector<string> &ans){
        if(open==0 && close==0){
            ans.push_back(s);
        }
        if(open>0){
            answer(open-1,close,s+'(',ans);
        }
        if(close>open){
            answer(open,close-1,s+')',ans);
        }
    }
};