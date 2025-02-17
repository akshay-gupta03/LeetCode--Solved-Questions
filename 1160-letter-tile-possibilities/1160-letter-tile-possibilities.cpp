class Solution {
public:
    int numTilePossibilities(string tiles) {
    vector<int> AlphabetsFrequency(26,0);
    for(char c:tiles){
        AlphabetsFrequency[c-'A']++;
    } 
    return stringcount(AlphabetsFrequency);   
    }

    int stringcount(vector<int> &AlphabetsFrequency){
        int answer=0;
        for(int i=0;i<26;i++){
            if(AlphabetsFrequency[i]>0){
                AlphabetsFrequency[i]--;
                answer+=1+stringcount(AlphabetsFrequency);
                AlphabetsFrequency[i]++;
            }
        }
        return answer;
    }
};