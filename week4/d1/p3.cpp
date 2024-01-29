class Solution {
  public:
    bool Search(int n, vector<int>& arr, int key) {
        
        int low=0;
        int high=n-1;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]==key)
            {
                return true;
            }
            if(arr[low]==arr[mid] && arr[mid]==arr[high])
            {
                low=low+1;
                high=high-1;
                continue;
            }
            if(arr[low]<=arr[mid])
            {
                if(arr[low]<=key && key<=arr[mid])
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
                if(arr[mid]<=key && key<=arr[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return false;
    }
};
