class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
    int n=nums.size();
    vector<pair<int,int>> duplicate;
    for(int i=0;i<n;++i){
        duplicate.push_back(make_pair(nums[i],i));
    }
    
    sort(duplicate.begin(),duplicate.end());

    int left=0,right=1;
    while(right<n){
        vector<int> pos={duplicate[left].second};
        while(right<n and abs(duplicate[right].first-duplicate[right-1].first)<=limit){
            pos.push_back(duplicate[right].second);
            right++;
        }
        sort(pos.begin(),pos.end());
        for(int i=0;i<right-left;i++){
            nums[pos[i]]=duplicate[left+i].first;
        }
        left=right;
        right++;
    }
    return nums;    
    }
};