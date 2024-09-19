class Solution {
public:
    int findNumberOfLIS(vector<int>& nums) {
    int n=nums.size();
    vector<int> longest(n,1);
    vector<int> count(n,1);   
    int maximum=INT_MIN; 
    int answer=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(nums[j]<nums[i] && longest[i]<longest[j]+1){
                longest[i]=longest[j]+1;
                count[i]=count[j];
            }
            else if(nums[i]>nums[j] && longest[i]==longest[j]+1){
                count[i]+=count[j];
            }
        }
        maximum=max(maximum,longest[i]);
    }
    for(int i=0;i<n;i++){
        if(longest[i]==maximum){
            answer+=count[i];
        }
    }
    return answer;    
    }
};