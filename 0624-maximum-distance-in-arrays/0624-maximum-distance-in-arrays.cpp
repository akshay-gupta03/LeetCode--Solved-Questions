class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
    int min1= arrays[0][0];
    int max1=arrays[0].back();
    int ans=0;
    for(int i=1;i<arrays.size();i++){
        int min2=arrays[i][0];
        int max2=arrays[i].back();
        if(abs(max2-min1)>ans){
            ans=abs(max2-min1);
        }
        if(abs(max1-min2)>ans){
            ans=abs(max1-min2);
        }
        min1=min(min1,min2);
        max1=max(max1,max2);
    }   
    return ans;
    }
};