class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
    sort(events.begin(),events.end());
    int i=0;
    int n=events.size();
    int ans=0;
    int maxday=0;
    priority_queue<int,vector<int>,greater<int>> pq;

    for(auto e:events){
        maxday=max(maxday,e[1]);
    }

    for(int day=1;day<=maxday;day+=1){
        while(i<n && events[i][0]<=day){
            pq.push(events[i++][1]);
        }

        while(!pq.empty() && day>pq.top()){
            pq.pop();
        }
        
        if(!pq.empty()){
            ans+=1;
            pq.pop();
        }
    }
    return ans;    
    }
};