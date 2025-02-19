class Solution {
public:
    string getHappyString(int n, int k) {
    int count=0;
        backtrack("",n,k,count);
        if(count== k){
            return ans;
        }
        return "";    
    }

    string s="abc";
    string ans;
    void backtrack(string cur, int &n, int &k, int &count)
    {
        if(count == k){
            return;
        }
        if(cur.size()==n){
            ans=cur;
            count+=1;
            return;
        }
        for(auto c:s){
            if(cur.size() and c == cur.back()){
                continue;
            }
            backtrack(cur+c,n,k,count);
        }
    }
};