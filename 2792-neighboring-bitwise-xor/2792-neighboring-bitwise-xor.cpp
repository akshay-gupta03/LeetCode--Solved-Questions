class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
    int ans=0;
    for(int i:derived){
        ans^=i;
    }  
    if(ans==0){
        return true;
    } 
    return false; 
    }
};