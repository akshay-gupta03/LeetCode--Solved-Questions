class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> map;
        int ans=-1;
        for(int i=0;i<nums.size();i++){
            int sum=add(nums[i]);
            if(map.find(sum)!=map.end()){
                ans=max(ans,nums[i]+map[sum]);
                map[sum]=max(map[sum],nums[i]);
            }
            else{
                map[sum]=nums[i];
            }
        }
        return ans;
    } 

    int add(int num){
        int ans=0;
        while(num){
            ans+=num%10;
            num/=10;
        }
        return ans;
    }
};