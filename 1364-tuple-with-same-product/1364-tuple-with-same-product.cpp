class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
    unordered_map<int,int> product;
    int n=nums.size();
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            product[nums[i]*nums[j]]++;
        }
    } 

    for(auto [multiplication,count]: product){
        ans+=(count*(count-1)/2);
    }  
    ans*=8;
    return ans; 
    }
};