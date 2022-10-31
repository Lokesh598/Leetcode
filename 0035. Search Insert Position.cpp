class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        int mid;
        if(l == r) {
            if(nums[l] == target)
                return l;
        }
        while(l<r) {
            mid = l+ (r-l)/2;
            if(nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                l = mid+1;
            } else 
                r = mid-1;
        }
        if(nums[l]<target)
            return ++l;
        else {
            return l;
        }
    }
};
