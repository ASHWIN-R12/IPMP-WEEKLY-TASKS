class Solution {
public:
     void recurPermute(int index, vector<int> &nums, vector<vector<int>> &ans) {
        if(index == nums.size()) {
            ans.push_back(nums); 
            return; 
        }
         unordered_set<int> st;
        for(int i = index;i<nums.size();i++) {
            if (st.count(nums[i])==1) continue;
            st.insert(nums[i]);
            swap(nums[index], nums[i]); 
            recurPermute(index+1,nums, ans); 
            swap(nums[index], nums[i]); 
        }
        
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans; 
        recurPermute(0, nums, ans); 
        return ans;
        
    }
};
