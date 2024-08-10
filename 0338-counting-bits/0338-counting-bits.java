class Solution {
    public static int newfunction(int num){
    if(num==0){
        return 0;
    }
    if (num==1){
        return 1;
    }
    if(num%2==0){
        return newfunction(num/2);
    }
    else{
        return newfunction(num/2)+1;
    }
    }
    
    public int[] countBits(int n) {
    int[]ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=newfunction(i);
    }
    return ans;
    }
}