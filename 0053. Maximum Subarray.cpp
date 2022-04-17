Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: [4,-1,2,1] has the largest sum = 6.
  
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN;
        int cursum = 0;
        for(int i =0; i<nums.size();i++)
        {
            cursum = cursum+nums[i];
            if(cursum>maxsum)
            {
                maxsum = cursum;
            }
            if(cursum<0)
            {
                cursum =0;
            }
        }
        return maxsum;
    }
};
