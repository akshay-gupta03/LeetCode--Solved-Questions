class Solution {
public:
    string smallestNumber(string pattern) {
    int i=0;
    string ans="1";
    char num='1';
    for(auto c:pattern){
        if(c=='I'){
            num++;
            ans.push_back(num);
            i=ans.size()-1;
        }
        else{
            num++;
            ans.push_back(num);
            for(int j=ans.size()-1;j>i;j--){
                swap(ans[j],ans[j-1]);
            }
        }
    }
    return ans;
    }    
};