class Solution {
    public int maximumWealth(int[][] accounts) {
    int cnt=0;
    int max=0;
    for(int i=0;i<accounts.length;i++){
        for(int j=0;j<accounts[i].length;j++){
            cnt+=accounts[i][j];
        }
        if(cnt>max){
            max=cnt;
        }
        cnt=0;
    } 
    return max;
    }
}