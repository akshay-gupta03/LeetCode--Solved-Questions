class Solution {
public:
    int divisorSubstrings(int num, int k) {
    string str=to_string(num);
    int ans=0;
    for(int i=0;i<=str.size()-k;i++){
        string s=str.substr(i,k);
        int b=stoi(s);
        if(b!=0)
            if(num%b==0)
                ans++;
    }
    return ans;    
    }
};