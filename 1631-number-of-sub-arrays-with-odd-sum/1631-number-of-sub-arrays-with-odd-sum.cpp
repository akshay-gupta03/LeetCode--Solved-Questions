class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
    const int MOD=1e9+7;
    int evens=1;
    int odds=0;
    int ans=0;
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum%2==0){
            ans=(ans+odds)%MOD;
            evens++;
        }
        else{
            ans=(ans+evens)%MOD;
            odds++;
        }
    } 
    return ans%MOD;
    }
};