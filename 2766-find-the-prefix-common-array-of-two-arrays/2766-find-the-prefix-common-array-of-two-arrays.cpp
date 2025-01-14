class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
    int n=A.size();
    int j=0;
    vector<int> ans(n);
    vector<int> count(n+1,0);
    for(int i=0;i<n;i++){
        if(count[A[i]]<0){
            j++;
        }
        count[A[i]]++;
        if(count[B[i]]>0){
            j++;
        }
        count[B[i]]--;
        ans[i]=j;
    }
    return ans;    
    }
};