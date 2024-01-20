class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int mini=INT_MAX;
        int sum_min=0;
        int maxi=INT_MIN;
        int sum_max=0;
        int total=0;
        
        
        for(int i=0;i<nums.size();i++)
        {   
            total+=nums[i];
            sum_min+=nums[i];
            sum_max+=nums[i];
            if(sum_min<mini)
            {
                mini=sum_min;
                }
            if(sum_max>maxi)
            {
                maxi=sum_max;
            }
                
            if(sum_min>0)
                sum_min=0;
            if(sum_max<0)
                sum_max=0;
        }
        if(maxi>0)
        {
            return max(maxi,total-mini);
        }
        else
            return maxi;
        
    }
};
