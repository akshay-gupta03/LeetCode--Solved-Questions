class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
    int count=0;
    // int inner=0;
    // for(int i=0;i<words.size();i++){
    //     inner=0;
    //     for(int j=0;j<pref.size();j++){
    //         if(words[i][j]==pref[j]){
    //             inner++;
    //         }
    //     }
    //     if(inner==pref.size()){
    //         count++;
    //     }
    // }
    for(const string& i:words){
        if(i.size()>=pref.size() && i.substr(0,pref.size())==pref){
            count++;
        }
    }
    return count;    
    }
};