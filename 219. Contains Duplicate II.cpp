//btute force solution

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        for(int i = 0; i<n; i++) {
            for(int j = i+1; j<n; j++) {
                if(nums[i] == nums[j]) {
                    if(abs(i-j)<=k)
                        return true;
                }

            }        
        }
        return false;
    }
};
//


// unorderd_map solution
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            if(mp.count(nums[i])){//map.find(nums[i])!=map.end()
                int diff = abs(mp[nums[i]] - i);
                if (diff <= k)return true;  
            }
            mp[nums[i]] = i;
        }
        return false;
    }
};

//unordered_set solution
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> map;
        int left=0,right=0;
        while(right<n){
		   // if window size becomes greater than k , then we erase the left most value as if becomes of no use
            if(right-left>k){
                map.erase(nums[left]);
                left++;
            }
            auto val = map.insert(nums[right]);
			// here we check if current val was already present or not in the set
            if(val.second==false)
                return true;
            right++;
        }
        return false;
    }
};
