class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    stack<int> s;
    for(string str : tokens) {
        if(str=="+"||str=="-"||str=="*"||str=="/") {
            int temp1=s.top();
            s.pop();
            int temp2=s.top();
            s.pop();
            int ans;
            if(str=="+") {
                ans=temp2+temp1;
            }
            else if(str=="-") {
                ans=temp2-temp1;
            }
            else if(str=="*") {
                ans=temp2*temp1;
            }
            else if(str=="/") {
                ans=temp2/temp1;
            }
            s.push(ans);
        }
        else {
            s.push(stoi(str));
        }
    }
    return s.top();
    }
};