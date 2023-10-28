class Solution {
public:
    string reverseWords(string s) {
        stringstream str(s);
        string val,temp;
        while(str>>val){
            reverse(val.begin(),val.end());
            temp+= val+" ";
        }
        
        return temp.substr(0,temp.size()-1);
    }
};