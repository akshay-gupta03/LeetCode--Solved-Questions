class Solution {
public:
    int minimumLength(string s) {
    int n=s.length();
    int count=0;
    int ans;
    map<char,int>charcnt;
    for(int i=0;i<n;i++){
        charcnt[s[i]]++;
        if(charcnt[s[i]]>2){
            count=count+2;
            charcnt[s[i]]=charcnt[s[i]]-2;
        }
    }
    ans=n-count;
    return ans;    
    }
};