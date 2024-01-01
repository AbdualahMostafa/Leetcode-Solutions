class Solution {
public : 
    bool IsVowel(char c){
    if (c=='a'||c=='A'||c=='e'||c=='E'||c=='i'
        ||c=='I'||c=='o'||c=='O'||c=='u'||c=='U'){
        return true;
    }
           return false;
}
public:
string reverseVowels(string s) {
    int i=0;
    int j=s.size()-1;
    while (i<j){
        if (!IsVowel(s[i])){
            i++;
            continue;
        }
        if (!IsVowel(s[j])){
            j--;
            continue;
        }
        swap(s[i],s[j]);
        i++;
        j--;
    }
    return s;
    }
};