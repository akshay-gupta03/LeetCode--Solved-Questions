class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {
    const int n=startTime.size();
    int used=0;
    for (int i=0; i<k; i++){
        used+=endTime[i]-startTime[i];
    }
    if (n==k){
        return eventTime-used;
    }

    int ans=startTime[k]-used;
    for (int left=0,right=k;right<n;left++,right++) {
        used+=(endTime[right]-startTime[right])-(endTime[left]-startTime[left]);
        int end;
        if(right== n-1) {
            end=eventTime;
        } 
        else{
            end= startTime[right+1];
        }
        int start=endTime[left];
        ans=max(ans,end-start-used);
    }
    return ans;   
    }
};