class Solution {
    public String defangIPaddr(String address) {
    StringBuilder ans = new StringBuilder();
    String replace="[.]";
    for(int i=0;i<address.length();i++){
        char s=address.charAt(i);
        if(s=='.'){
            ans.append(replace);
        }
        else{
            ans.append(s);
        }
    }
    return ans.toString();
    }
}