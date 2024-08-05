class Solution {
    public String kthDistinct(String[] arr, int k) {
    HashMap<String,Integer> h = new HashMap<>();
    for(String s: arr){
        h.put(s,h.getOrDefault(s,0)+1);
    }
    for (var s: arr) {
      if (h.get(s)==1){
         k--;
      }
      if (k==0){
         return s;
      }
    }
    return "";
    }
}