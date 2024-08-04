class Solution {
    public char findTheDifference(String s, String t) {
    int c=0;
    for( char j:t.toCharArray()){
       c^=j; 
    }
    for(char i:s.toCharArray()){
        c^=i;
    }
    return (char)c;
    }
}