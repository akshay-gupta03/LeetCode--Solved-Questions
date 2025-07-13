class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
    int n=players.size();
    int m=trainers.size();
    sort(players.begin(), players.end());
    sort(trainers.begin(), trainers.end());
    int match=0;
    for (int i=0, j=0; i<n && j<m; i++){
        j=lower_bound(trainers.begin()+j, trainers.end(), players[i])-trainers.begin();
        if (j<m) {
            j++;
            match++;
        }
    } 
    return match;    
    }
};