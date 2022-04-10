class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size()-1;
        vector<int> result;
        while(left<right) {
            int l = numbers[left];
            int r = numbers[right];
            
            if(l+r == target) {
                result.push_back(left+1);
                result.push_back(right+1);
                break;
            }
            else if (l+r<target)
                left++;
            else
                right--;
        }
        return result;
    }
};
