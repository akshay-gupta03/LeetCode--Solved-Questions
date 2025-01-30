class Solution {
public:
    bool backspaceCompare(string s, string t) {
    string a="";
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'&&a.empty()){
            continue;
        }
        if(s[i]=='#'){
            a.pop_back();
        }
        else{
            a.push_back(s[i]);
        }
    }

    string b="";
    for(int i=0;i<t.size();i++){
        if(t[i]=='#' &&b.empty()){
            continue;
        }
        if(t[i]=='#'){
          b.pop_back();
        }
        else{  
            b.push_back(t[i]);
        }
    }

    return a==b;   
    }
};