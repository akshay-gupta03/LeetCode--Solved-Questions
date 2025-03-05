class Solution {
public:
    long long coloredCells(int n) {
    long long count=1;
    if(n==1){
        return count;
    } 
    long long colored=4;
    while(n>1){
        count+=colored;
        colored+=4;
        n--;
    }  
    return count;
    }
};