class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
    vector<vector<int>>ans;
    int i=0;
    int j=0;
    while (i<firstList.size() && j<secondList.size()) {
        if(firstList[i][1]<secondList[j][0]){
            i++;
        }
        else if (secondList[j][1]<firstList[i][0]){
            j++;
        }
        else{
            int maximum=max(firstList[i][0],secondList[j][0]);
            int minimum=min(firstList[i][1],secondList[j][1]);
            ans.push_back({maximum,minimum});
            if(firstList[i][1]<secondList[j][1]){
                i++;
            }
            else{
                j++;
            }
        }
    }
    return ans;   
    }
};