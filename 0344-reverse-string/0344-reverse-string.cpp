class Solution {
public:
    void reverseString(vector<char>& s) {
       stack<char>st;
        for(int i=0; i<s.size(); i++){
            st.push(s[i]);
        }
        s.clear();
        for(int i=0; st.size(); i++){
            s.push_back(st.top());
            st.pop();
        }
        for(int i=0; i<s.size(); i++){
            cout<<s[i];
        }
        
    }
};