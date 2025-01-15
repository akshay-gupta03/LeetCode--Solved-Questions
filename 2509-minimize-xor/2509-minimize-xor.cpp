class Solution {
public:
    int minimizeXor(int num1, int num2) {
    int ans=0 ; 
    int bits=countBits(num2) ;
    for(int i=31;i>=0&& bits;i--){
        if((num1 & (1<<i))){
            ans=(ans|(1<<i)); 
            bits--; 
        }
    }
    for(int i=0;i<32 && bits;i++){
        if(!(ans & (1<<i))){
            ans=(ans|(1<<i)); 
            bits--; 
        }
    }
    return ans;   
    }

    int countBits(int num){
        int cnt=0 ; 
        for(int i=0;i<32;i++){
            int bit=(num &(1<<i)); 
            if(bit){
                cnt++;
            } 
        }
        return cnt; 
    }
};