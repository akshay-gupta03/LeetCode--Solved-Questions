class Solution {
    public String longestCommonPrefix(String[] s) {
    Arrays.sort(s);
    String f = s[0];
    String l = s[s.length-1];
    int c=0;
    while(c<f.length() && c<l.length())
    {
        if(f.charAt(c)==l.charAt(c))
            c++;
        else
            break;
    }
    return f.substring(0,c);
    }
}