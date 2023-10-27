public class Solution {
    public string ReverseWords(string s) {
          string[] vec = s.Trim().Split(new[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
        string temp = "";
        for (int i = vec.Length - 1; i > 0; i--) {
            temp += vec[i] + " ";
        }
        return temp + vec[0];
    }
}