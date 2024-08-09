class Solution {
    public double findMaxAverage(int[] nums, int k) {
    int max=0;
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=nums[i];
    }
    max=sum;
    for(int i=k;i<nums.length;i++){
        sum+=nums[i]-nums[i-k];
        if(sum>max){
            max=sum;
        }
    }
    return (double)max/k;
    }
}