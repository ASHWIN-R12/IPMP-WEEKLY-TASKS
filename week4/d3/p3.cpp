int KthMissingElement(int arr[], int n, int k)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        int missing=arr[mid]-arr[0]-mid;
        if(missing<k)
            low=mid+1;
        else
            high=mid-1;
    }
    int ans=high+arr[0]+k;
    if(ans<arr[n-1])
        return ans;
    return -1;
}
