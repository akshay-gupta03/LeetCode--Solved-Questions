class Solution {
    public int sumOfTheDigitsOfHarshadNumber(int x) {
    int cnt=0;
    int y=x;
    for(int i=0;i<x;i++){
        cnt+=y%10;
        y=y/10;  
    }  
    if(x%cnt==0){
        return cnt;
    } 
    return -1; 
    }
}