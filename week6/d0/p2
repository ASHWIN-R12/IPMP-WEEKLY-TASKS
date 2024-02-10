class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            int more = target - nums[i];
            if(mpp.find(more)!=mpp.end())
            {
                ans.push_back(mpp[more]);
                ans.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        return ans;
    }
};
