class Solution {
public:
    int maxFreeTime(int eventTime, vector<int>& startTime, vector<int>& endTime) {
    int n = startTime.size();
    vector<int> vacant;
    vacant.push_back(startTime[0]);
    for (int i = 1; i < n; ++i){
        vacant.push_back(startTime[i] - endTime[i - 1]);
    }
    vacant.push_back(eventTime - endTime[n - 1]); 
    
    vector<int> maxLeft(n + 1), maxRight(n + 1);
    maxLeft[0]= vacant[0];
    for (int i= 1; i<= n; i++){
        maxLeft[i]= max(maxLeft[i - 1], vacant[i]);
    }
    maxRight[n]= vacant[n];
    
    for (int i=n-1;i>=0;i--){
        maxRight[i]= max(maxRight[i + 1], vacant[i]);
    }
    
    int ans= 0;
    for (int i = 0; i < n; i++){
        int duration = endTime[i] - startTime[i];
        int leftGap = (i > 0) ? maxLeft[i - 1] : 0;
        int rightGap = (i + 2 <= n) ? maxRight[i + 2] : 0;
        
        if (duration <= leftGap || duration <= rightGap){
            ans= max(ans, vacant[i] + vacant[i + 1] + duration);
        } 
        else{
            ans= max(ans, vacant[i] + vacant[i + 1]);
        }
    }
    return ans;
    }
};