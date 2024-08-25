class Solution {
public:
    int countKeyChanges(string s) {
    int cnt=0;
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]-32 || s[i]==s[i+1]+32 || s[i]==s[i+1]){
            continue;
        }
        else{
            cnt++;
        }
    } 
    return cnt;   
    }
};