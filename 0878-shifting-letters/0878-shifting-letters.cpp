class Solution {
public:
    string shiftingLetters(string s,vector<int>& shifts) {
    int n=shifts.size();
    int total=0;
    for(int i=n-1;i>=0;i--){
        total+=shifts[i];
        total%=26;
        s[i]='a'+(s[i]-'a'+total)%26;
    }
    return s;    
    }
};