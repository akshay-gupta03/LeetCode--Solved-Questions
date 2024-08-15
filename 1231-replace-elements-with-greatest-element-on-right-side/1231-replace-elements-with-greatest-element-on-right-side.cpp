class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
    int n =arr.size();
    int max=arr[n-1];
    int temp=0;
    arr[n-1]=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]>max){
            temp=arr[i];
            arr[i]=max;
            max=temp;
        }
        else{
            arr[i]=max;
        }
    }
    return arr;
    }
};