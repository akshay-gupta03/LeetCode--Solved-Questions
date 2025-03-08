class Solution {
public:
    int minimumRecolors(string blocks, int k) {
    int n=blocks.size();
    int black=0;
    int mini=INT_MAX;
    
    for(int i=0;i<n;++i){
        if(blocks[i]=='B'){
            black++;
        }
        if(i>=k-1){
            mini = min(k-black,mini);
            if(blocks[i-k+1]=='B')
                black--;
        }
    }
    return mini;    
    }
};