class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> trace(nums.begin(),nums.end());
    int maximum=0;
    for(int i:trace){
        if(trace.find(i-1)==trace.end()){
            int j=i;
            int count=1;
            while(trace.find(j+1)!=trace.end()){
                j++;
                count++;
            }
            maximum=max(maximum,count);
        }
    }
    return maximum;
    }
};