class Solution {
public:
    int hammingWeight(int n) {
    int count=0;
    int bin=0;
    for(int i=0;i<32;i++){
        bin=n>>i;
        if(bin & 1==1){
        count++;
       }
    }
    return count;    
    }
};