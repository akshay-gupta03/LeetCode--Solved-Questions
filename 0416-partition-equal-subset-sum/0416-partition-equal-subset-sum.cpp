class Solution {
public:
    bool canPartition(vector<int>& nums) {
    int n=nums.size();
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=nums[i];
    } 
    if(sum%2!=0){
        return false;
    }
    int value=sum/2;
    bool subset[n+1][value+1];

    for(int i=0;i<=n;i++){
        for(int j=0;j<=value;j++){
            if(i==0 || j==0){
                subset[i][j]=false;
            }
            else if(nums[i-1]>j){
                subset[i][j]=subset[i-1][j];
            }
            else if(nums[i-1]==j){
                subset[i][j]=true;
            }
            else if(subset[i-1][j]==true) {
                subset[i][j] = true; 
            } 
            else if(j>=nums[i-1] && subset[i-1][j-nums[i-1]]==true) {
                subset[i][j] = true;
            } 
            else{
                subset[i][j] = false;
            }
        }
    }
    return subset[n][value];     
    }
};