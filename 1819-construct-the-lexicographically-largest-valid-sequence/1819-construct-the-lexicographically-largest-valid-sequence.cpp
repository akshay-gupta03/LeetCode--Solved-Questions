class Solution {
public:
    vector<int> constructDistancedSequence(int n) {
        vector<int>v(2*n-1,0);
        vector<int>visited(n+1,0);
        backtrack(v,visited,n,0);
        return v;    
    }

    bool backtrack(vector<int>& v, vector<int> &visited, int n, int index){
        while(index < 2*n-1 && v[index] != 0){
            index++;
        }
        if(index == 2*n-1){
            return true;
        }
        for(int i=n; i >= 1; i--){
            if(!visited[i]){
                if(i == 1){
                    v[index] = i;
                    visited[i] = 1;
                    if(backtrack(v, visited, n, index+1))return true;
                    v[index] = 0;
                    visited[i] = 0;
                }
                else{
                    if((index+i)<2*n-1 && !v[index+i]){
                        v[index] = i;
                        v[index+i] = i;
                        visited[i] = 1;
                        if(backtrack(v,visited,n,index+1)) return true;
                        v[index] = 0;
                        v[index+i] = 0;
                        visited[i] = 0;
                    }
                }
            }
        }
        return false;
    }
};