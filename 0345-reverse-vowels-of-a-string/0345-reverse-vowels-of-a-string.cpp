class Solution {
public:
    string reverseVowels(string s) {
    unordered_set<char> str= {'a','A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U'};
    int i=0;
    int j=s.length()-1;
    while(i<j){
        while(!str.count(s[i]) && i<j){
            i++;
        }
        while(!str.count(s[j]) && i<j){
            j--;
        }
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;    
    }
};