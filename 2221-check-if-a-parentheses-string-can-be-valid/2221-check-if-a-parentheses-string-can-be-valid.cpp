class Solution {
public:
    bool canBeValid(string s, string locked) {
    int n=s.size();
    if(n%2)
        return false;
    int open=0;
    int close=0; 
    for(int i=0;i<n;i++){
        if(s[i]=='(' || locked[i]=='0')
            open++;
        else
            close++;
        if(open<close)
            return false;
    }
    open=0;
    close=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]==')' || locked[i]=='0')
            close++;
        else
            open++;
        if(open>close)
            return false;
    }
    return true;    
    }
};