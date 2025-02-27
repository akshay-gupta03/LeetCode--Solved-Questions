class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
    unordered_set<int> set;
    int cnt=0;
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        set.insert(arr[i]);
    }
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            int a=arr[i],b=arr[j];
            int c=a+b;
            cnt=2;
          while(set.find(c)!=set.end()){
              cnt++;
              a=b;
              b=c;
              c=a+b;
          }
          maxi=max(maxi,cnt);
        }
    }
    if(maxi<=2){
        return 0;
    }
    return maxi;
    }
};