class Solution {
    public String reverseWords(String s) {
        String[] vec = s.trim().split("\\s+");
        String temp="";
        for (int i = vec.length - 1; i > 0; i--){
            temp+=vec[i]+" ";
        }
        return temp+vec[0];
    }
}