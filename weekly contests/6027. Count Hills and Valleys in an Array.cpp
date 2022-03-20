class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int n = nums.size();
        int j = 0;
        int res = 0; // used for store hills and valleys
        for(int i=1; i<n-1; i++) {
            if(nums[i] > nums[j] && nums[i] > nums[i+1]) {
                res++;
                j = i;
            } else if (nums[i] < nums[j] && nums[i] < nums[i+1]) {
                res++;
                j = i;
                
            } else if (nums[i] == nums[j]){
                j = i;
                continue;
            }
        }
        return res;
    }
};
