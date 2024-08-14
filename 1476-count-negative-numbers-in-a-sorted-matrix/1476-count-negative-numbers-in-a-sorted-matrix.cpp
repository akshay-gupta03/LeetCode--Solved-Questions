class Solution {
private:
    int negative(const vector<int>& row) {
        int s=0;
        int e=row.size()-1;
        while (s<=e) {
            int mid=s+(e-s)/2;
            if (row[mid]<0) {
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return row.size()-s;
    }

public:
    int countNegatives(vector<vector<int>>& grid) {
        int cnt=0;
        for (const auto& row : grid) {
            cnt+=negative(row);
        }    
        return cnt;
    }
};
