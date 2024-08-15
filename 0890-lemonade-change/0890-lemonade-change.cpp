class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
    int cnt1=0;
    int cnt2=0;
    for(int i=0;i<bills.size();i++){
        switch(bills[i]){
            case 5:
                cnt1++;
                break;
            case 10:
                cnt2++;
                if(cnt1<1){
                    return false;
                }
                else{
                    cnt1--;
                }
                break;
            case 20:
                if(cnt2>0 && cnt1>0){
                    cnt1--;
                    cnt2--;
                }
                else if(cnt1>=3){
                    cnt1-=3;
                }
                else{
                    return false;
                }
                break;
        }    
    }   
    return true; 
    }
};