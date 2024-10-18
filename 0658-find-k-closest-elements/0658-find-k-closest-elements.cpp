class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    vector<int> ans;
    int n=arr.size();
    int s=0;
    int e=n-k;
    while(s<e){
        int mid=(s+e)/2;
        int front=x-arr[mid];
        int back=arr[mid+k]-x;
        if(front>back) {
            s=mid+1;
        } 
        else {
            e=mid;
        }
    }
    for(int i=s;i<s+k;i++) {
        ans.push_back(arr[i]);
    }
    return ans;    
    }
};