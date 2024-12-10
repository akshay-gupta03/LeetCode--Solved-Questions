class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int maxlen=0;
    int i=0;
    int zeros=0;

    // for(int j=0;j<nums.size();j++){
    //     if(nums[j]==0){
    //         zeros++;
    //     }
    //     while(zeros>k){
    //         if(nums[i]==0){
    //             zeros--;
    //         }
    //         i++;
    //     }
    //     if(zeros<=k){
    //         int length=j-i+1;
    //         maxlen=max(length,maxlen);
    //     }
    // } 
    // return maxlen;  
    // }

    for(int j=0;j<nums.size();j++){
        if(nums[j]==0){
            zeros++;
        }
        if(zeros>k){
            if(nums[i]==0){
                zeros--;
            }
            i++;
        }
        if(zeros<=k){
            int length=j-i+1;
            maxlen=max(length,maxlen);
        }
    } 
    return maxlen;  
    }
};