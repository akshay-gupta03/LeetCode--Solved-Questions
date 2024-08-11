class Solution {
    public int numIdenticalPairs(int[] nums) {
    int cnt=0;
    HashMap<Integer,Integer> ans = new HashMap<>();
    for(int i : nums){
        if(ans.containsKey(i)){
            cnt+=ans.get(i);
        }
        ans.put(i,ans.getOrDefault(i,0)+1);
    }
    return cnt; 
    }
}