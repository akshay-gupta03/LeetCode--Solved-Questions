class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
    vector<string> answer;
    int i=0;
    while(i<s.length()){
        string inside="";
        for(int j=0;j<k;j++){
            if(i<s.length()){
                inside+=s[i];
            }
            else{
                inside+=fill;
            }
            i++;
        }
        answer.push_back(inside);
    }  
    return answer;  
    }
};