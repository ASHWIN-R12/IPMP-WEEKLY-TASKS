class Solution {
public:
    long long func(vector<int> arr,int ban)
    {   
        long long total=0;
        for(int i=0;i<arr.size();i++)
        {
            total += ceil((double)arr[i]/(double)ban);
        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(func(piles,mid)<=h)
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
