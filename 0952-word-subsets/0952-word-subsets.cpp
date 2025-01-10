class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
    unordered_map<char,int> required;        
    for(auto i:words2){
        unordered_map<char,int> current;
        for(char c:i){
            current[c]++;
            required[c]=max(required[c],current[c]);
        }
    }
    
    vector<string> ans;        
    for(auto i:words1){
        unordered_map<char,int> current;
        for(char c:i){
            current[c]++;
        }
        
        bool present=true;
        for(auto [ch,frq]:required){
            if(current[ch]<frq){
                present=false; 
                break;
            }
        }
        if(present){
            ans.push_back(i);
        }
    }
    return ans;
    }

};