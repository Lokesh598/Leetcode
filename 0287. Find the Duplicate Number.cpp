
//brute force solution
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                if(nums[i] == nums[j])
                    return nums[i];
            }
        }
        return -1;
    }
};

// optimize using sort the array

class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            int n = nums.size();
            sort(nums.begin(), nums.end());
            int j = 1;
            for(int i =0; i<n; i++) {
                if(nums[i]==nums[j++])
                    return nums[i];
            }
            return -1;
            
        }
};
//optimize with set

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> visited;
        for(auto &num : nums) {
            if (visited.count(num))
                return num;
            visited.insert(num);
        }
        return -1;
    }
};

//using map
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int, int> m;
        int duplicate = 0;
        for(auto i= 0; i<nums.size(); ++i)
        ++m[nums[i]];
        
        for(auto i : m)
        {
            if(i.second > 1)
            {
                duplicate = i.first;
                break;
            }
        }
        return duplicate;
    }
	// for github repository link go to my profile.
};
