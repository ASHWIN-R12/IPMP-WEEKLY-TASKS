class Solution{
    public:
    int search(int a[], int low, int high, int key){
        
        
        while(low<=high)
        {   
            int mid=low+(high-low)/2;
            if(a[mid]==key)
                return mid;
            if(a[low]<=a[mid])
            {
                if(a[low]<=key && key<=a[mid])
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
                if(a[mid]<=key && key<=a[high])
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
        return -1;
    }
};
