class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int up=0;
    int down=matrix.size()-1;
    int lft=0;
    int ryt=matrix[0].size()-1;
    int dir=0;
    int i;
    vector<int> ans;
    
    while(up<=down && lft<=ryt)
    {
        if(dir==0)
        {
            for(i=lft;i<=ryt;i++)
                ans.push_back(matrix[up][i]);
            up++;
        }
        else if(dir==1)
        {
            for(i=up;i<=down;i++)
                ans.push_back(matrix[i][ryt]);
            ryt--;
        }
        else if(dir==2)
        {
            for(i=ryt;i>=lft;i--)
                ans.push_back(matrix[down][i]);
            down--;
        }
        else if(dir==3)
        {
            for(i=down;i>=up;i--)
                ans.push_back(matrix[i][lft]);
            lft++;
        }
        dir=(dir+1)%4;
    }
    return ans; 
    }
};