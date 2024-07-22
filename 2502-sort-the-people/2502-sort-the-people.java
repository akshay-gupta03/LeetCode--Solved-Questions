class Solution {
    public String[] sortPeople(String[] names, int[] heights) {
    for(int i=0;i<heights.length-1;i++){
        if(heights[i]<heights[i+1]){
            int temp=heights[i];
            heights[i]=heights[i+1];
            heights[i+1]=temp;

            String temp2=names[i];
            names[i]=names[i+1];
            names[i+1]=temp2;

            i=-1;
    }
    } 
    return names;
    }
}