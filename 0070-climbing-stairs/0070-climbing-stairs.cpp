class Solution {
public:
    int climbStairs(int n) {
    int cnt1=1;
    int cnt2=2;
    int ans=0;
    if(n==1){
        return cnt1;
    }
    if(n==2){
        return cnt2;
    }
    for(int i=3;i<=n;i++){
        ans=cnt1+cnt2;
        cnt1=cnt2;
        cnt2=ans;
    }
    return ans;
    }
};