class Solution {
public:
    vector<string> ans;
    vector<string> generateParenthesis(int n) {
    answer(n,n,"");
    return ans;
    }

    void answer(int open,int close,string s){
        if(open==0 && close==0){
            ans.push_back(s);
        }
        if(open>0){
            s.push_back('(');
            answer(open-1,close,s);
            s.pop_back();
        }
        if(close>open){
            s.push_back(')');
            answer(open,close-1,s);
            s.pop_back();
        }
    }
};