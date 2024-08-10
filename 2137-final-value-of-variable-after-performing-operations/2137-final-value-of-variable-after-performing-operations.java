class Solution {
    public int finalValueAfterOperations(String[] operations) {
    int ans=0;
    int n=operations.length;
    for(int i=0;i<n;i++){
        if("X--".equals(operations[i]) || "--X".equals(operations[i]) ) ans--;
        else if("++X".equals(operations[i])  || "X++".equals(operations[i]) ) ans++;
        else continue;
    }  
    return ans;  
    }
}