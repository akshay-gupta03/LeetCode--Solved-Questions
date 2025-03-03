class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
    // int i=0;
    // int j=0;
    // int k=nums.size()-1;
    // while (i<=k){
    //     if(nums[i]<pivot){
    //         swap(nums[i],nums[j]);
    //         i++;
    //         j++;
    //     }
    //     else if(nums[i]==pivot){
    //         i++;
    //     }
    //     else{
    //         swap(nums[i],nums[k]);
    //         k--;
        
    //     }
    // } 
    // k= nums.size()-1;
    // while(i<k){
    //     swap(nums[i],nums[k]);
    //     i++;
    //     k--;
    // }
    // return nums; 

    int count=0;    
    int i=0;
    int n=nums.size();
    vector<int>small,greater;
    while(i<n){
        if(nums[i]<pivot){
            small.push_back(nums[i]);
        }
        else if(nums[i]==pivot){
            count++;
        }
        else{
            greater.push_back(nums[i]);
        }
        i++;
    }

    for(int i=0;i<count;i++){
        small.push_back(pivot);
    }

    for(int i=0;i<greater.size();i++){
        small.push_back(greater[i]);
    }

    return small;
    }
};