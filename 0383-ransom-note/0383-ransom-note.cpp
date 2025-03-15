class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
    unordered_map<char, int> alphabets;
    for(int i=0; i<magazine.length(); i++) {
        alphabets[magazine[i]]++;
    }
    
    for(int i=0; i<ransomNote.length(); i++) {
        if(alphabets[ransomNote[i]]>0){
            alphabets[ransomNote[i]]--;
        }
        else{
            return false;
        }
    }
    return true;    
    }
};