ALGORITHM:
Keep track of the smallest and largest element we haven't placed. If we see an 'I', place the small element; otherwise place the large element.
  EXAMPLE:
'IDID' given string length is n = 4;
 if s[i] = 'I' then store lowest index in the result array, along with that we also increamenting lower pointer
  if s[i] = 'D' then store 4 (greatest index) in the result array, along with that we also decreamenting higher pointer
  


class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> perm;
        int lo = 0, hi = n;
        
        for(int i = 0; i<n; i++) {
            if(s[i] == 'I')
                perm.push_back(lo++);
            else
                perm.push_back(hi--);
        }
        perm.push_back(lo);
        return perm;
    }
};
