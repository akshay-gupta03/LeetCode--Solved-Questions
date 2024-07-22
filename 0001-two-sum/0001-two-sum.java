class Solution {
    public int[] twoSum(int[] nums, int target) {
    int n=nums.length;
    Map<Integer,Integer> map=new HashMap<>();
    int[] ans=new int[2];
    int i=0;
    while(i<n) {
        if (map.containsKey(target - nums[i])) {
            ans[1]=i;
            ans[0]=map.get(target - nums[i]);
            return ans;
        }
        map.put(nums[i], i);
        i++;
    }
    return ans;
    }
}