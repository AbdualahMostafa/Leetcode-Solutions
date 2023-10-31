class Solution {
public:
    /*
    transform(s.begin(), s.end(), s.begin(), ::tolower);
        
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j) {
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            while (i < j && !isalnum(s[j])) {
                j--;
            }
            
            if (s[i] != s[j]) {
                return false;
            }
            
            i++;
            j--;
        }
        return true;
    }*/
     bool isPalindrome(string s) {
   int start = 0;
        int end = s.size() - 1;

        while(start<=end){
            if(!isalnum(s[start])){
                start++;
                continue;
            }

            if(!isalnum(s[end])){
                end--;
                continue;
            }

            if(tolower(s[start]) != tolower(s[end])) return false;
            else{
                start++;
                end--;
            }
        }
        return true;
    }
};