class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
    if (amount==0){
        return 0;
    } 
    vector<int> ans(amount+1);
    ans[0]=0;
    for(int i=1;i<=amount;i++){
        ans[i]=INT_MAX;
        for(int j=0;j<coins.size();j++){
           if(i-coins[j]>=0 && ans[i-coins[j]]!=INT_MAX){
            ans[i]=min(ans[i],ans[i-coins[j]]+1);
           } 
        }
    } 
    if(ans[amount]!=INT_MAX){
        return ans[amount];
    }
    return -1;    
    }
};