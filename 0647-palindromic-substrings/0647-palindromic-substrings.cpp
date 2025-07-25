class Solution {
public:
    int countSubstrings(string s) {
    int n=s.size();
    int count=0;
    for(int i=0;i<n;i++) {
        count+= counting(s,i,i);
        count+= counting(s,i,i+1);
    }
    return count;
    }

    int counting(string s,int l,int r){
    int count= 0;
    while(l>=0 && r<s.size() && s[l]==s[r]){
        count++;
        l--; 
        r++;
    }
    return count;
    }   

};