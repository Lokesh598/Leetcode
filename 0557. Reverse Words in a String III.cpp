class Solution {
public:
    string reverseWords(string s) {
        for(int start = 0; start < s.length(); start++) {
            if(s[start] != ' ') {
                int end = start;
                
                while(end < s.length() && s[end] != ' ') {
                    end++; //move end till space came
                }
                reverse(s.begin() + start, s.begin() + end);
                start = end - 1;
            }
        }
        return s;
    }
};
