class Solution {
public:
    string getEncryptedString(string s, int k) {
    string result="";
    for(int i=0;i<s.size();i++){
        result+=s[(i+k)%s.size()];
    }
    return result;
    }
};