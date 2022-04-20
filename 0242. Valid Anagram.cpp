1. this will take O(nlogn) time

class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1 = s.length();
        int n2 = t.length();
        
        if(n1 != n2) 
            return false;
        
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        
        for(int i = 0; i<n1; i++) {
            if(s[i] != t[i])
                return false;
        }
        return true;
    }
};

// 2. we can resuce unnecesary lines from the above code

class Solution {
  sort(s.begin(), s.end());
        sort(t.begin(), t.end());
  
  return s == t;
};

we can further imrove this solution
using extra space
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false;
        int n = s.length();
        int counts[26] = {0};
        for (int i = 0; i < n; i++) { 
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
        }
        for (int i = 0; i < 26; i++)
            if (counts[i]) return false;
        return true;
    }
};
