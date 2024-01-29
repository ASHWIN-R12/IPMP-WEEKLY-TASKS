class Solution {
public:
    long long helper(vector<int>& arr,int div)
    {
        long long total=0;
        for(int i=0;i<arr.size();i++)
        {
            total += ceil((double)arr[i]/(double)div);
        }
        return total;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=*max_element(nums.begin(),nums.end());
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(helper(nums,mid)<=threshold)
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return low;
        
    }
};
