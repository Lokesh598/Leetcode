class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int> st;
        string res = "";
        
        for(int i = 0; i< s.length(); i++) {
            if(s[i] == '(') {
                st.push(i);
            } else if(s[i] == ')') {
                if(st.empty()) 
                    s[i] = '#';
                else
                    st.pop();
            }
        }
        
        while(!st.empty()) {
            s[st.top()] = '#';
            st.pop();
        }
        
        for(int i = 0; i<s.length(); i++) {
            if(s[i] != '#')
                res.push_back(s[i]);
        }
        return res;
    }
};
