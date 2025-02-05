class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
    long long int sum=INT_MAX;
	sort(nums.begin(),nums.end());
	int n=nums.size();
	for(int i=0;i<n;i++) {
		int j=i+1;
		int k=n-1;
		while(j<k) {
			int total=nums[i]+nums[j]+nums[k];
			if(total==target){
                return target;
            }
			else if(total<target){
                j++;
            }
			else{
                k--;
            }
			if(abs(total-target)<abs(sum-target)){
                sum=total;
            } 
		}
	}
	return sum;    
    }
};