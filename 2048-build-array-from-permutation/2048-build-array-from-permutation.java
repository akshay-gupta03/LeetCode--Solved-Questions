class Solution {
    public int[] buildArray(int[] nums) {
    int n=nums.length;
    int[] ans = new int[n];
    for(int i=0;i<n;i++){
        int temp= nums[i];
        ans[i]=nums[temp];
    } 
    return ans;  
    }
}