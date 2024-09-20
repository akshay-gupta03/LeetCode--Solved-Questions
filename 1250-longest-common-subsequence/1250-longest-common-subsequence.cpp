class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>> table(text1.length(),vector<int>(text2.length(),-1));
        return answer(text1,text2,0,0,table);
    }

    int answer(string& text1, string& text2, int first, int second, vector<vector<int>>& table){
        if(first==text1.size()){
            return 0;
        }
        if(second==text2.size()){
            return 0;
        }
        if(table[first][second]!=-1){
            return table[first][second];
        }
        int count=0;
        if(text1[first]==text2[second]){
            count=1+answer(text1,text2,first+1,second+1,table);
        }
        else{
            count=max(answer(text1,text2,first+1,second,table),answer(text1,text2,first,second+1,table));
        }
        table[first][second]=count;
    return table[first][second];
    }
};