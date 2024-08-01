class Solution {
    public int countSeniors(String[] details) {
    int cnt=0;
    for(String s:details){
        String sub =s.substring(11,13);
        if(Integer.parseInt(sub)>60){
            cnt++;
        }
    }
    return cnt;    
    }
}