class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        int res = INT_MAX;
        int n = tops.size();
        
        for(int i = 1; i<=6; i++) {
            int totalIs = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            
            for(int j = 0; j<n; j++) {
                if (tops[j] == i || bottoms[j] == i) {
                    totalIs++;
                    if(tops[j]!=i)
                        cnt1++;
                    if(bottoms[j]!=i)
                        cnt2++;
                }
            }
            if(totalIs == n)
                res = min(res, min(cnt1,cnt2));
        }
        if(res == INT_MAX)
            return -1;
        else
            return res;
    }
};
