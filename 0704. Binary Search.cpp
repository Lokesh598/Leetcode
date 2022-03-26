class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0;
        int end = n-1;
        
        while(start<=end)
        {
            if(start == end)// if only element in array
            {
            if(nums[start] == target)
                return start;
            else
                return -1;
            }
            int mid = (start+(end-1))/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                end = mid-1;
            else 
                start = mid+1;
        }
        return -1;
    }
};
