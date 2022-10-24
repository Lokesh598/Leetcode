class Solution {
public:
    void printSub(int i,vector<int> &ds, vector<int> &nums, vector<vector<int>> &result) {

        int n = nums.size();
        if(i == n) {
            result.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        printSub(i+1,ds, nums, result);
        ds.pop_back();
        printSub(i+1, ds, nums, result);
        
    } 
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> ds;
        printSub(0, ds, nums, result);
        return result;
    }
};
