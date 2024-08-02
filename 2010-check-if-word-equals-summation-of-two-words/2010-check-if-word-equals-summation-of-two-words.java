class Solution {
    public boolean isSumEqual(String firstWord, String secondWord, String targetWord) {
    // int i=0;
    String str ="";
    String str2 ="";
    String strtar ="";
    for(char c : firstWord.toCharArray()){
        int num=c-'a';
        str += num;
        // System.out.println(num);
    }    
    for(char c : secondWord.toCharArray()){
        int num2=c-'a';
        str2+=num2;

    }
    for(char c :targetWord.toCharArray()){
        int numtar=c-'a';
        strtar+=numtar;
        // System.out.println(numtar);
    }
    return Integer.parseInt(str)+Integer.parseInt(str2)==Integer.parseInt(strtar);
    }
}