class Solution {
public:
    vector<int> minOperations(string boxes) {
    vector<int> ans(boxes.length());
    int cnt=0,move=0;
    for(int i=0;i<boxes.length();i++) {
      ans[i]+=move;
      cnt+=boxes[i]-'0';
      move+=cnt;
    }
    cnt=0,move=0;
    for (int i=boxes.length()-1;i>=0;i--) {
      ans[i]+=move;
      cnt+=boxes[i]-'0';
      move+=cnt;
    }
    return ans;    
    }
};