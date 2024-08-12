class Solution {
public:
    string truncateSentence(string s, int k) {
    string ans ="";
    int cnt=0;
    for(auto i: s){
        if(isspace(i)){
            if(cnt==k-1){
                break;
            }
            else{
                cnt++;
            }
        }
        ans+=i;
    }
    return ans;
    }
};