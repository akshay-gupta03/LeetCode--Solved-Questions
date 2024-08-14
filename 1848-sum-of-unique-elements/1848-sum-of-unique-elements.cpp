class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
    int cnt=0;
    unordered_map <int,int> h;
    for(int i:nums){
        h[i]++;
    }  
    for(auto i:h){
        if(i.second==1){
            cnt+=i.first;
        }
    }
    return cnt;
    }
};