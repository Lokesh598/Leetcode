class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> a;
        vector<int> answer;
        
        for (int i =0;i<nums.size();i++){
            
            a.push_back(make_pair(nums[i],i));
            
        }
        sort(a.begin(),a.end());
        int k=0;
        int m=nums.size()-1;
        
        while(k<m){
             int b=a[k].first+a[m].first;
        if (b<target){
            //i=i+1;
            k=k+1;
        }
            else  if (b>target){
                //j=j-1;
                m=m-1;
            }
        
           else if  (b==target){
               answer.push_back(a[k].second);
               answer.push_back(a[m].second);
               break;
               
           }
        
        }
        return answer;
    }
};
