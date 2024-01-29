class Solution{
public:
    int lower_bound(vector<int>& arr,int n,int x)
    {
        int low=0;
        int high=n-1;
        int ans=n;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            if(arr[mid]>=x)
            {
                ans=mid;
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return ans;
    }
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    int count=0;
	    int index=-1;
	    for(int i=0;i<n;i++)
	    {
	        int ans=m-lower_bound(arr[i],m,1);
	        if(ans>count)
	        {
	           count=ans;
	           index=i;
	        }
	    }
	    return index;
	}

};
