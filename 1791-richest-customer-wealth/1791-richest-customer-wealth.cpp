class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
    int cnt=0;
    int max=INT_MIN;
    for(auto i: accounts){
        cnt=accumulate(i.begin(),i.end(),0);
        if(cnt>max){
            max=cnt;
        }
    }
    return max; 
    }
};