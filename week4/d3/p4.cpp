class Solution 
{   
    public:
    //Function to find minimum number of pages.
    int func(int arr[],int n,int pages)
    {
        int numOfStu=1;
        long long allocpages=0;
        
        for(int i=0;i<n;i++)
        {
            if(allocpages+arr[i]<=pages)
            {
                allocpages+=arr[i];
            }
            else
            {
                numOfStu++;
                allocpages=arr[i];
            }
        }
        return numOfStu;
    }
    int findPages(int arr[], int n, int m) 
    {   
        if(m>n)
            return -1;
        int low=*max_element(arr,arr+n);
        int high=accumulate(arr,arr+n,0);
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            int numOfStu=func(arr,n,mid);
            if(numOfStu>m)
                low=mid+1;
            else
                high=mid-1;
            
        }
        return low;
    }
};
