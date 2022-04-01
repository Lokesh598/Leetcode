class Solution {
public:
    void reverseString(vector<char>& s) {
        //we can use two pinter 
//         int first = 0;
//         int last = s.size()-1;
//         for(int i = 0; i<s.size(); i++) {
//             // int temp = s[first];
//             // s[first] = s[last];
//             // s[last] = temp;
            
//             first++;
//             last--;
        // }
        vector<char> rev;
        for(int i = s.size()-1; i>=0; i--) {
            rev.push_back(s[i]);
        }
        s=rev;
    }
};
