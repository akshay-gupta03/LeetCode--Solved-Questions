class Solution {
public:
    bool canConstruct(string s, int k) {
    int n=s.length();
    if(n<k){
        return false;
    }

    if(n==k){
        return true;
    }

    unordered_map<char,int>frequency;
    int count=0;
    for(char i:s){
        frequency[i]++;
    }
    for(auto i:frequency){
        if(i.second%2==1){
            count++;
        }
    }
    if(count>k){
        return false;
    }
    return true;    
    }
};