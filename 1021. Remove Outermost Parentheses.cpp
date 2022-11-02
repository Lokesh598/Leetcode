class Solution {
public:
    string removeOuterParentheses(string s) {
        //need to datastructures
        stack<char> result;
        queue<char> temp;
        string output;
        for(int i = 0; i < s.length(); i++) {
            temp.push(s[i]);
            if(s[i] == '('){
                result.push(s[i]);
            } else {
                result.pop();
                if(result.empty()) {
                    temp.pop();
                    while(!temp.empty()) {
                        output.push_back(temp.front());
                        temp.pop();
                    }
                    output.pop_back();
                }
            }
        }
        return output; 
    }
};
