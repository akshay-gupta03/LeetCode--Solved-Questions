class Solution {
    public boolean areOccurrencesEqual(String s) {
    int[] arr = new int[27];
    for(int i=0;i<s.length();i++){
        arr[s.charAt(i)-'a']++;
    } 
    int num = arr[s.charAt(0)-'a'];

    for(int i = 0; i<arr.length; i++)
        if(num != arr[i] && arr[i] != 0)
            return false;
    return true;  
    }
}