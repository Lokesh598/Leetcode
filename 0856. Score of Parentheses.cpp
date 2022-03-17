class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int count = 0;
        
        //use iterator for track count
        
        for(auto i: s) {
            if(i =='(') {
                st.push(count);
                count = 0;
            } else {
                count = st.top() + max(count*2, 1);
                st.pop();    
            }
        }
        return count;
    }
};
