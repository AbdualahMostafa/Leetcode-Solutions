class Solution {
public:
    int compress(vector<char>& chars) {
    int n=chars.size();
    int i=0,j=0;
    while (i<n){
        int count=1;
        while (i<n-1&&chars[i]==chars[i+1]){
            i++;
            count++;
        }
        chars[j++]=chars[i++];
        if (count>1){
            string temp= to_string(count);
            for (char digit:temp)
                chars[j++]=digit;
        }
    }
    return j;
  }
};