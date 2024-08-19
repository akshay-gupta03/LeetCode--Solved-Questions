class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
    int n=nums.size();
    int sum=0;
    for (int i=0;i<n;i++) {
        int count=0;
        int maxx=0;
        int total=0;
        while(nums[i]!=0){
            maxx=max(maxx,nums[i]%10);
            nums[i]/=10;
            count++;
        }
        while(count!=0){
            total=total*10+maxx;
            count--;
        }
        sum+=total;
    }
    return sum;
    }

};